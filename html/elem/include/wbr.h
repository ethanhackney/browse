#ifndef HTML_ELEM_WBR_H
#define HTML_ELEM_WBR_H

#include "internal.h"

// <wbr> element
class html_wbr_elem : public html_internal_elem {
public:
        html_wbr_elem();
        ~html_wbr_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_WBR_H
