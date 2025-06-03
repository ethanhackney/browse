#ifndef HTML_ELEM_B_H
#define HTML_ELEM_B_H

#include "internal.h"

// <b> element
class html_b_elem : public html_internal_elem {
public:
        html_b_elem();
        ~html_b_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_B_H
