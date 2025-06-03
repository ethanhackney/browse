#ifndef HTML_ELEM_H3_H
#define HTML_ELEM_H3_H

#include "internal.h"

// <h3> element
class html_h3_elem : public html_internal_elem {
public:
        html_h3_elem();
        ~html_h3_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_H3_H
