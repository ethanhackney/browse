#ifndef HTML_ELEM_TH_H
#define HTML_ELEM_TH_H

#include "internal.h"

// <th> element
class html_th_elem : public html_internal_elem {
public:
        html_th_elem();
        ~html_th_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TH_H
