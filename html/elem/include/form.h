#ifndef HTML_ELEM_FORM_H
#define HTML_ELEM_FORM_H

#include "internal.h"

// <form> element
class html_form_elem : public html_internal_elem {
public:
        html_form_elem();
        ~html_form_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FORM_H
