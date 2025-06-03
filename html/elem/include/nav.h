#ifndef HTML_ELEM_NAV_H
#define HTML_ELEM_NAV_H

#include "internal.h"

// <nav> element
class html_nav_elem : public html_internal_elem {
public:
        html_nav_elem();
        ~html_nav_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_NAV_H
