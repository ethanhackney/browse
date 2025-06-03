#ifndef HTML_ELEM_A_H
#define HTML_ELEM_A_H

#include "internal.h"

// <a> element
class html_a_elem: public html_internal_elem {
public:
        html_a_elem();
        ~html_a_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif HTML_ELEM_A_H
