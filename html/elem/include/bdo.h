#ifndef HTML_ELEM_BDO_H
#define HTML_ELEM_BDO_H

#include "internal.h"

// <bdo> element
class html_bdo_elem : public html_internal_elem {
public:
        html_bdo_elem();
        ~html_bdo_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BDO_H
