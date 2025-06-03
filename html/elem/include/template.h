#ifndef HTML_ELEM_TEMPLATE_H
#define HTML_ELEM_TEMPLATE_H

#include "internal.h"

// <template> element
class html_template_elem : public html_internal_elem {
public:
        html_template_elem();
        ~html_template_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TEMPLATE_H
