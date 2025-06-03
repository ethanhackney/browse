#ifndef HTML_ELEM_HEADER_H
#define HTML_ELEM_HEADER_H

#include "internal.h"

// <header> element
class html_header_elem : public html_internal_elem {
public:
        html_header_elem();
        ~html_header_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_HEADER_H
