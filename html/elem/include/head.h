#ifndef HTML_ELEM_HEAD_H
#define HTML_ELEM_HEAD_H

#include "internal.h"

// <head> element
class html_head_elem : public html_internal_elem {
public:
        html_head_elem();
        ~html_head_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_HEAD_H
