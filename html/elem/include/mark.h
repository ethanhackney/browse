#ifndef HTML_ELEM_MARK_H
#define HTML_ELEM_MARK_H

#include "internal.h"

// <mark> element
class html_mark_elem : public html_internal_elem {
public:
        html_mark_elem();
        ~html_mark_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_MARK_H
