#ifndef HTML_ELEM_BDI_H
#define HTML_ELEM_BDI_H

#include "internal.h"

// <bdi> element
class html_bdi_elem : public html_internal_elem {
public:
        html_bdi_elem();
        ~html_bdi_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BDI_H
