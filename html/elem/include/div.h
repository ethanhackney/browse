#ifndef HTML_ELEM_DIV_H
#define HTML_ELEM_DIV_H

#include "internal.h"

// <div> element
class html_div_elem : public html_internal_elem {
public:
        html_div_elem();
        ~html_div_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DIV_H
