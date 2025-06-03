#ifndef HTML_ELEM_THEAD_H
#define HTML_ELEM_THEAD_H

#include "internal.h"

// <thead> element
class html_thead_elem : public html_internal_elem {
public:
        html_thead_elem();
        ~html_thead_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_THEAD_H
