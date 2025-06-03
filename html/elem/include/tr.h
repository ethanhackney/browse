#ifndef HTML_ELEM_TR_H
#define HTML_ELEM_TR_H

#include "internal.h"

// <tr> element
class html_tr_elem : public html_internal_elem {
public:
        html_tr_elem();
        ~html_tr_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TR_H
