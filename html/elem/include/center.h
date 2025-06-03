#ifndef HTML_ELEM_CENTER_H
#define HTML_ELEM_CENTER_H

#include "internal.h"

// <center> element
class html_center_elem : public html_internal_elem {
public:
        html_center_elem();
        ~html_center_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_CENTER_H
