#ifndef HTML_ELEM_DT_H
#define HTML_ELEM_DT_H

#include "internal.h"

// <dt> element
class html_dt_elem : public html_internal_elem {
public:
        html_dt_elem();
        ~html_dt_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DT_H
