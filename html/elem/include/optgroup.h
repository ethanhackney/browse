#ifndef HTML_ELEM_OPTGROUP_H
#define HTML_ELEM_OPTGROUP_H

#include "internal.h"

// <optgroup> element
class html_optgroup_elem : public html_internal_elem {
public:
        html_optgroup_elem();
        ~html_optgroup_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_OPTGROUP_H
