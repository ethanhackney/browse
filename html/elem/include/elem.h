#ifndef HTML_ELEM_H
#define HTML_ELEM_H

#include "cvisitor.h"
#include "visitor.h"
#include <cstdlib>
#include <memory>
#include <string>

// abstract html element
class html_elem {
public:
        virtual ~html_elem() {}

        /**
         * visit elem:
         *
         * args:
         *  @v: reference to visitor
         *
         * ret:
         *  none
         */
        virtual void visit(html_elem_visitor &v) = 0;

        /**
         * const visit elem:
         *
         * args:
         *  @v: reference to const visitor
         *
         * ret:
         *  none
         */
        virtual void visit(html_elem_cvisitor &v) const = 0;

        /**
         * get number of children: 
         *
         * args:
         *  none
         *
         * ret:
         *  number of children
         */
        virtual std::size_t child_len(void) const = 0;

        /**
         * get a child element:
         *
         * args:
         *  @i: index of child
         *
         * ret:
         *  pointer to html_elem
         */
        virtual std::shared_ptr<html_elem> get_child(std::size_t i) = 0;

        /**
         * get a constant child element:
         *
         * args:
         *  @i: index of child
         *
         * ret:
         *  pointer to html_elem
         */
        virtual const std::shared_ptr<html_elem> get_cchild(std::size_t i) const = 0;

        /**
         * append a child element:
         *
         * args:
         *  @i: index of child
         *
         * ret:
         *  none
         */
        virtual void append_child(std::shared_ptr<html_elem> elem) = 0;

        /**
         * remove a child element:
         *
         * args:
         *  @i: index of child
         *
         * ret:
         *  none
         */
        virtual void rm_child(std::size_t i) = 0;

        /**
         * get number of attributes:
         *
         * args:
         *  none
         *
         * ret:
         *  number of attributes
         */
        virtual std::size_t attr_len(void) const = 0;

        /**
         * get i'th attribute:
         *
         * args:
         *  @i: index of attribute
         *
         * ret:
         *  attribute type
         */
        virtual int attr_get(std::size_t i) const = 0;

        /**
         * get attribute value by index:
         *
         * args:
         *  @i: index of attribute
         *
         * ret:
         *  attribute value
         */
        virtual const std::string &attr_get_by_idx(std::size_t i) const = 0;

        /**
         * get attribute by type:
         *
         * args:
         *  @type: attribute type
         *
         * ret:
         *  attribute value
         */
        virtual const std::string &attr_get_by_type(int type) const = 0;

        /**
         * add an attribute:
         *
         * args:
         *  @type: attribute token type
         *  @val:  value
         *
         * ret:
         *  none
         */
        virtual void attr_add(int type, const std::string &val) = 0;
};

#endif // HTML_ELEM_H
