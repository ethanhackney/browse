#ifndef HTML_ELEM_RP_H
#define HTML_ELEM_RP_H

#include "internal.h"

// <rp> element
class html_rp_elem : public html_internal_elem {
public:
        html_rp_elem();
        ~html_rp_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_RP_H
