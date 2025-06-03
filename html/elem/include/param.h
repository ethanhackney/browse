#ifndef HTML_ELEM_PARAM_H
#define HTML_ELEM_PARAM_H

#include "internal.h"

// <param> element
class html_param_elem : public html_internal_elem {
public:
        html_param_elem();
        ~html_param_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_PARAM_H
