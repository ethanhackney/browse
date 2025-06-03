#ifndef HTML_ELEM_SMALL_H
#define HTML_ELEM_SMALL_H

#include "internal.h"

// <small> element
class html_small_elem : public html_internal_elem {
public:
        html_small_elem();
        ~html_small_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SMALL_H
