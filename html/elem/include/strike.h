#ifndef HTML_ELEM_STRIKE_H
#define HTML_ELEM_STRIKE_H

#include "internal.h"

// <strike> element
class html_strike_elem : public html_internal_elem {
public:
        html_strike_elem();
        ~html_strike_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_STRIKE_H
