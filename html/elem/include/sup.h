#ifndef HTML_ELEM_SUP_H
#define HTML_ELEM_SUP_H

#include "internal.h"

// <sup> element
class html_sup_elem : public html_internal_elem {
public:
        html_sup_elem();
        ~html_sup_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SUP_H
