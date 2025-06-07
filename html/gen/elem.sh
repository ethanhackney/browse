#!/bin/bash

cd "$(dirname "$0")"

INCLUDE=../elem/include
SRC=../elem/src

# read in tags
mapfile -t elems <tagtab

# generate first part of visitor
cat >$INCLUDE/visitor.h <<EOF
// AUTO-GENERATED

#ifndef HTML_ELEM_VISITOR_H
#define HTML_ELEM_VISITOR_H

class html_text_elem;
EOF

# generate first part of cvisitor
cat >$INCLUDE/cvisitor.h <<EOF
// AUTO-GENERATED

#ifndef HTML_ELEM_CVISITOR_H
#define HTML_ELEM_CVISITOR_H

class html_text_elem;
EOF

# generate forward declarations for visitors
for elem in "${elems[@]}"; do
  echo "class html_${elem}_elem;" >>$INCLUDE/visitor.h
  echo "class html_${elem}_elem;" >>$INCLUDE/cvisitor.h
done

# generate dump visitor header
cat >$INCLUDE/dump.h <<EOF
// AUTO-GENERATED

#ifndef HTML_ELEM_DUMP_VISITOR_H
#define HTML_ELEM_DUMP_VISITOR_H

#include "cvisitor.h"
#include "internal.h"
#include "text.h"
#include <string>
#include <iostream>

// dump visitor
class html_elem_dump_visitor : public html_elem_cvisitor {
private:
        std::ostream &_os;         // output stream
        int           _indent {0}; // indentation

        /**
         * dump internal node:
         *
         * args:
         *   @t:    element type
         *   @elem: element
         **/
        void dump_internal_node(const std::string& t,
                                const html_internal_elem &elem);
public:
        // default (_indent = 0 and _os = std::cout)
        html_elem_dump_visitor(void);
        // with starting indentation
        html_elem_dump_visitor(int start);
        // with output stream
        html_elem_dump_visitor(std::ostream &os);
        // with starting indentation and output stream
        html_elem_dump_visitor(int start, std::ostream &os);
        ~html_elem_dump_visitor();

EOF

# generate dump visitor visit method for each element type
for elem in "${elems[@]}"; do
  echo "        void visit(const html_${elem}_elem &elem);" >>$INCLUDE/dump.h
done

# finalize dump header
cat >>$INCLUDE/dump.h <<EOF
        void visit(const html_text_elem &elem);
};

#endif // #ifndef HTML_ELEM_DUMP_VISITOR_H
EOF

# generate first part of dump visitor source
cat >$SRC/dump.cc <<EOF
// AUTO-GENERATED

EOF

# generate includes for element types
for elem in "${elems[@]}"; do
  echo "#include \"../include/${elem}.h\"" >>$SRC/dump.cc
done

# generate the non automatic code
cat >>$SRC/dump.cc <<EOF
#include "../include/dump.h"
#include "../../html.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

/**
 * print indentation:
 *
 * args:
 *  @os: output stream
 *  @n:  number of spaces
 *
 * ret:
 *  none
 */
static void indent(std::ostream &os, int n);

/**
 * indent and then print string:
 *
 * args:
 *  @os: output stream
 *  @s:  string to print
 *
 * ret:
 *  none
 */
static void indent_print(std::ostream &os, int n, const std::string &s);

/**
 * print html_elem type:
 *
 * args:
 *  @os:   output stream
 *  @n:    indent
 *  @type: type
 *
 * ret:
 *  none
 */
static void type(std::ostream &os, int n, const std::string &type);

html_elem_dump_visitor::html_elem_dump_visitor(void)
        : _os {std::cout}
{
}

html_elem_dump_visitor::html_elem_dump_visitor(int start)
        : _os {std::cout},
        _indent {start}
{
}

html_elem_dump_visitor::html_elem_dump_visitor(std::ostream &os)
        : _os {os}
{
}

html_elem_dump_visitor::html_elem_dump_visitor(int start, std::ostream &os)
        : _os {os},
        _indent {start}
{
        if (_indent < 0)
                _indent = 0;
}

html_elem_dump_visitor::~html_elem_dump_visitor()
{
}

void html_elem_dump_visitor::dump_internal_node(const std::string &t,
                                                const html_internal_elem &elem)
{
        indent_print(_os, _indent, "{\n");

        _indent += 2;
        type(_os, _indent, t);

        indent_print(_os, _indent, "\"attributes\": {\n");
        _indent += 2;
        for (std::size_t i = 0; i < elem.attr_len(); i++) {
                auto attrtype = elem.attr_get(i);
                auto name = std::string{attr_name(attrtype)};
                auto val = elem.attr_get_by_idx(i);

                indent(_os, _indent);

                std::cout << "\"" << name << "\": ";
                if (val == "")
                        std::cout << "true";
                else
                        std::cout << "\"" << val << "\"";

                if (i != elem.attr_len() - 1)
                        std::cout << ",";

                std::cout << "\n";
        }
        _indent -= 2;
        indent_print(_os, _indent, "},\n");

        indent_print(_os, _indent, "\"children\": [\n");
        _indent += 2;
        for (std::size_t i = 0; i < elem.child_len(); i++) {
                elem.get_cchild(i)->visit(*this);
                if (i != elem.child_len() - 1)
                        std::cout << ",";
                std::cout << "\n";
        }
        _indent -= 2;
        indent_print(_os, _indent, "]");

        _indent -= 2;
        indent_print(_os, _indent, "\n}");

}

static void indent(std::ostream &os, int n)
{
        os << std::string(n, ' ');
}

static void indent_print(std::ostream &os, int n, const std::string &s)
{
        indent(os, n);
        std::cout << s;
}

static void type(std::ostream &os, int n, const std::string &type)
{
        indent(os, n);
        os << "\"type\": \"" << type << "\",\n";
}

void html_elem_dump_visitor::visit(const html_text_elem &elem)
{
        indent_print(_os, _indent, "{\n");

        type(_os, _indent + 2, "text");

        std::string s {"\"c\": \""};
        switch (elem.c()) {
        case '\n':
                s += "\\\\n";
                break;
        default:
                s += elem.c();
                break;
        }
        s += "\"\n";

        indent_print(_os, _indent + 2, s);

        indent_print(_os, _indent, "}");
}
EOF

# prepare for visitor methods
cat >>$INCLUDE/visitor.h <<EOF

class html_elem_visitor {
public:
EOF

# prepare for cvisitor methods
cat >>$INCLUDE/cvisitor.h <<EOF

class html_elem_cvisitor {
public:
EOF

# generate elements
for elem in "${elems[@]}"; do
  # remove what is there
  rm -f "elem/include/${elem}.h"
  rm -f "elem/src/${elem}.cc"

  # generate visitor method for this element
  cat >>$INCLUDE/visitor.h <<EOF
        virtual void visit(html_${elem}_elem &elem) = 0;
EOF

  # generate cvisitor method for this element
  cat >>$INCLUDE/cvisitor.h <<EOF
        virtual void visit(const html_${elem}_elem &elem) = 0;
EOF

  # generate dump visit method for this element
  cat >>$SRC/dump.cc <<EOF

void html_elem_dump_visitor::visit(const html_${elem}_elem &elem)
{
        dump_internal_node("$elem", elem);
}
EOF

  # generate element header file
  cat >$INCLUDE/${elem}.h <<EOF
#ifndef HTML_ELEM_${elem^^}_H
#define HTML_ELEM_${elem^^}_H

#include "internal.h"

// <$elem> element
class html_${elem}_elem : public html_internal_elem {
public:
        html_${elem}_elem();
        ~html_${elem}_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_${elem^^}_H
EOF

  # generate element source
  cat >$SRC/${elem}.cc <<EOF
#include "../include/${elem}.h"

html_${elem}_elem::html_${elem}_elem(void)
{
}

html_${elem}_elem::~html_${elem}_elem(void)
{
}

void html_${elem}_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_${elem}_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
EOF
done

# finalize visitor header
cat >>$INCLUDE/visitor.h <<EOF
        virtual void visit(html_text_elem &elem) = 0;
};

#endif // #ifndef HTML_ELEM_VISITOR_H
EOF

# finalize cvisitor header
cat >>$INCLUDE/cvisitor.h <<EOF
        virtual void visit(const html_text_elem &elem) = 0;
};

#endif // #ifndef HTML_ELEM_CVISITOR_H
EOF

# generate first part of factory header
cat >$INCLUDE/factory.h <<EOF
#ifndef HTML_ELEM_FACTORY_H
#define HTML_ELEM_FACTORY_H

#include "text.h"
EOF

# generate includes for each type
for elem in "${elems[@]}"; do
  echo "#include \"${elem}.h\"" >>$INCLUDE/factory.h
done

# prepare for factory methods
cat >>$INCLUDE/factory.h <<EOF
// AUTO-GENERATED

// html_elem factory
class html_elem_factory {
public:
EOF

# generate factory methods
for elem in "${elems[@]}"; do
  fn_name="$elem"

  # if element name conflicts with c++ keyword
  if [ "$elem" = "template" ]; then
    fn_name=template_elem
  fi
  if [ "$elem" = "main" ]; then
    fn_name=main_elem
  fi

  echo "        std::unique_ptr<html_${elem}_elem> ${fn_name}(void);" >>$INCLUDE/factory.h
done

# finalize factory header
cat >>$INCLUDE/factory.h <<EOF
        std::unique_ptr<html_text_elem> text(int c);
};

#endif // #ifndef HTML_ELEM_FACTORY_H
EOF

# first part of factory source
cat >$SRC/factory.cc <<EOF
// AUTO-GENERATED

#include "../include/factory.h"
EOF

for elem in "${elems[@]}"; do
  fn_name="$elem"

  # if element name conflicts with c++ keyword
  if [ "$elem" = "template" ]; then
    fn_name=template_elem
  fi
  if [ "$elem" = "main" ]; then
    fn_name=main_elem
  fi

  # generate method
  cat >>$SRC/factory.cc <<EOF

std::unique_ptr<html_${elem}_elem> html_elem_factory::${fn_name}(void)
{
        return std::make_unique<html_${elem}_elem>();
}
EOF
done

# finalize factory source
cat >>$SRC/factory.cc <<EOF

std::unique_ptr<html_text_elem> html_elem_factory::text(int c)
{
        return std::make_unique<html_text_elem>(c);
}
EOF
