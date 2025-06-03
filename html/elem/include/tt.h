#ifndef HTML_ELEM_TT_H
#define HTML_ELEM_TT_H

#include "internal.h"

// <tt> element
class html_tt_elem : public html_internal_elem {
public:
        html_tt_elem();
        ~html_tt_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TT_H
