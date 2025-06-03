#ifndef HTML_ELEM_SUB_H
#define HTML_ELEM_SUB_H

#include "internal.h"

// <sub> element
class html_sub_elem : public html_internal_elem {
public:
        html_sub_elem();
        ~html_sub_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SUB_H
