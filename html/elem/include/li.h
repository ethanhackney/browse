#ifndef HTML_ELEM_LI_H
#define HTML_ELEM_LI_H

#include "internal.h"

// <li> element
class html_li_elem : public html_internal_elem {
public:
        html_li_elem();
        ~html_li_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_LI_H
