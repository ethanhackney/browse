#ifndef HTML_ELEM_TFOOT_H
#define HTML_ELEM_TFOOT_H

#include "internal.h"

// <tfoot> element
class html_tfoot_elem : public html_internal_elem {
public:
        html_tfoot_elem();
        ~html_tfoot_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TFOOT_H
