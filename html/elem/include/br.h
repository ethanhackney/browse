#ifndef HTML_ELEM_BR_H
#define HTML_ELEM_BR_H

#include "internal.h"

// <br> element
class html_br_elem : public html_internal_elem {
public:
        html_br_elem();
        ~html_br_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BR_H
