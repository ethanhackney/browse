#ifndef HTML_ELEM_U_H
#define HTML_ELEM_U_H

#include "internal.h"

// <u> element
class html_u_elem : public html_internal_elem {
public:
        html_u_elem();
        ~html_u_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_U_H
