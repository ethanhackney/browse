#ifndef HTML_ELEM_H6_H
#define HTML_ELEM_H6_H

#include "internal.h"

// <h6> element
class html_h6_elem : public html_internal_elem {
public:
        html_h6_elem();
        ~html_h6_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_H6_H
