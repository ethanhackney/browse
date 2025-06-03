#ifndef HTML_ELEM_AREA_H
#define HTML_ELEM_AREA_H

#include "internal.h"

// <area> element
class html_area_elem : public html_internal_elem {
public:
        html_area_elem();
        ~html_area_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_AREA_H
