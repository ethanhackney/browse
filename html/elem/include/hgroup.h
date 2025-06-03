#ifndef HTML_ELEM_HGROUP_H
#define HTML_ELEM_HGROUP_H

#include "internal.h"

// <hgroup> element
class html_hgroup_elem : public html_internal_elem {
public:
        html_hgroup_elem();
        ~html_hgroup_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_HGROUP_H
