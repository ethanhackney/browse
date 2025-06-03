#ifndef HTML_ELEM_H2_H
#define HTML_ELEM_H2_H

#include "internal.h"

// <h2> element
class html_h2_elem : public html_internal_elem {
public:
        html_h2_elem();
        ~html_h2_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_H2_H
