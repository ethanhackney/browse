#ifndef HTML_ELEM_TD_H
#define HTML_ELEM_TD_H

#include "internal.h"

// <td> element
class html_td_elem : public html_internal_elem {
public:
        html_td_elem();
        ~html_td_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TD_H
