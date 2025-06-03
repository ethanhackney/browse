#ifndef HTML_ELEM_SELECT_H
#define HTML_ELEM_SELECT_H

#include "internal.h"

// <select> element
class html_select_elem : public html_internal_elem {
public:
        html_select_elem();
        ~html_select_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SELECT_H
