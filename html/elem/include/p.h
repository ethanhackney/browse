#ifndef HTML_ELEM_P_H
#define HTML_ELEM_P_H

#include "internal.h"

// <p> element
class html_p_elem : public html_internal_elem {
public:
        html_p_elem();
        ~html_p_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_P_H
