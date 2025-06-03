#ifndef HTML_ELEM_PRE_H
#define HTML_ELEM_PRE_H

#include "internal.h"

// <pre> element
class html_pre_elem : public html_internal_elem {
public:
        html_pre_elem();
        ~html_pre_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_PRE_H
