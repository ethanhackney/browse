#ifndef HTML_ELEM_DETAILS_H
#define HTML_ELEM_DETAILS_H

#include "internal.h"

// <details> element
class html_details_elem : public html_internal_elem {
public:
        html_details_elem();
        ~html_details_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DETAILS_H
