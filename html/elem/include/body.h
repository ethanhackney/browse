#ifndef HTML_ELEM_BODY_H
#define HTML_ELEM_BODY_H

#include "internal.h"

// <body> element
class html_body_elem : public html_internal_elem {
public:
        html_body_elem();
        ~html_body_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BODY_H
