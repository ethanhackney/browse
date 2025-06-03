#ifndef HTML_ELEM_DFN_H
#define HTML_ELEM_DFN_H

#include "internal.h"

// <dfn> element
class html_dfn_elem : public html_internal_elem {
public:
        html_dfn_elem();
        ~html_dfn_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DFN_H
