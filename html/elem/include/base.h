#ifndef HTML_ELEM_BASE_H
#define HTML_ELEM_BASE_H

#include "internal.h"

// <base> element
class html_base_elem : public html_internal_elem {
public:
        html_base_elem();
        ~html_base_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BASE_H
