#ifndef HTML_ELEM_COLGROUP_H
#define HTML_ELEM_COLGROUP_H

#include "internal.h"

// <colgroup> element
class html_colgroup_elem : public html_internal_elem {
public:
        html_colgroup_elem();
        ~html_colgroup_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_COLGROUP_H
