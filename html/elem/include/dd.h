#ifndef HTML_ELEM_DD_H
#define HTML_ELEM_DD_H

#include "internal.h"

// <dd> element
class html_dd_elem : public html_internal_elem {
public:
        html_dd_elem();
        ~html_dd_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DD_H
