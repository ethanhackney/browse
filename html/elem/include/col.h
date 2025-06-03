#ifndef HTML_ELEM_COL_H
#define HTML_ELEM_COL_H

#include "internal.h"

// <col> element
class html_col_elem : public html_internal_elem {
public:
        html_col_elem();
        ~html_col_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_COL_H
