#ifndef HTML_ELEM_I_H
#define HTML_ELEM_I_H

#include "internal.h"

// <i> element
class html_i_elem : public html_internal_elem {
public:
        html_i_elem();
        ~html_i_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_I_H
