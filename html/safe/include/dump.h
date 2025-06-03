#ifndef HTML_ELEM_DUMP_VISITOR_H
#define HTML_ELEM_DUMP_VISITOR_H

#include "cvisitor.h"
#include <iostream>

class html_elem_dump_visitor : public html_elem_cvisitor {
private:
        std::ostream &_os;         // output stream
        int           _indent {0}; // indentation

        /**
         * dump internal node:
         *
         * args:
         *  @elem: internal html element
         *
         * ret:
         *  none
         */
        void dump_internal_node(const html_internal_elem &elem);
public:
        /**
         * default constructor
         */
        html_elem_dump_visitor(void);

        /**
         * constructor with output stream:
         *
         * args:
         *  @os:    output stream
         */
        html_elem_dump_visitor(std::ostream &os);

        /**
         * constructor with initial starting indentation:
         *
         * args:
         *  @start: starting indentation value
         */
        html_elem_dump_visitor(int start);

        /**
         * constructor with initial starting indentation and output stream:
         *
         * args:
         *  @start: starting indentation value
         *  @os:    output stream
         */
        html_elem_dump_visitor(int start, std::ostream &os);

        ~html_elem_dump_visitor();
        void visit(const html_html_elem &elem);
        void visit(const html_text_elem &elem);
};

#endif // #ifndef HTML_ELEM_DUMP_VISITOR_H
