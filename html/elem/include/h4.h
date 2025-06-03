#ifndef HTML_ELEM_H4_H
#define HTML_ELEM_H4_H

#include "internal.h"

// <h4> element
class html_h4_elem : public html_internal_elem {
public:
        html_h4_elem();
        ~html_h4_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_H4_H
