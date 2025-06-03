#ifndef HTML_ELEM_H1_H
#define HTML_ELEM_H1_H

#include "internal.h"

// <h1> element
class html_h1_elem : public html_internal_elem {
public:
        html_h1_elem();
        ~html_h1_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_H1_H
