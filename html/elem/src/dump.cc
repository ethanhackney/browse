#include "../include/dump.h"
#include "../include/text.h"
#include "../include/html.h"
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

void html_elem_dump_visitor::visit(const html_html_elem &elem)
{
        indent_print(_os, _indent, "{\n");

        type(_os, _indent + 2, "elem");

        dump_internal_node(elem);

        indent_print(_os, _indent, "\n}");
}

void html_elem_dump_visitor::dump_internal_node(const html_internal_elem &elem)
{
        indent_print(_os, _indent + 2, "children: [\n");

        _indent += 4;
        for (std::size_t i = 0; i < elem.child_len(); i++) {
                elem.get_cchild(i).get()->visit(*this);
                if (i != elem.child_len() - 1)
                        std::cout << ",";
                std::cout << "\n";
        }
        _indent -= 4;

        indent_print(_os, _indent + 2, "]");
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
                s += "\\n";
                break;
        default:
                s += elem.c();
                break;
        }
        s += "\"\n";

        indent_print(_os, _indent + 2, s);

        indent_print(_os, _indent, "}");
}
