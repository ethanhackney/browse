#ifndef HTML_ELEM_VAR_H
#define HTML_ELEM_VAR_H

#include "internal.h"

// <var> element
class html_var_elem : public html_internal_elem {
public:
        html_var_elem();
        ~html_var_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_VAR_H
