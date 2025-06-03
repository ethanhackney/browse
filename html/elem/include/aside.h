#ifndef HTML_ELEM_ASIDE_H
#define HTML_ELEM_ASIDE_H

#include "internal.h"

// <aside> element
class html_aside_elem : public html_internal_elem {
public:
        html_aside_elem();
        ~html_aside_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_ASIDE_H
