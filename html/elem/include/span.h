#ifndef HTML_ELEM_SPAN_H
#define HTML_ELEM_SPAN_H

#include "internal.h"

// <span> element
class html_span_elem : public html_internal_elem {
public:
        html_span_elem();
        ~html_span_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SPAN_H
