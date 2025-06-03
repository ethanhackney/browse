#ifndef HTML_ELEM_OL_H
#define HTML_ELEM_OL_H

#include "internal.h"

// <ol> element
class html_ol_elem : public html_internal_elem {
public:
        html_ol_elem();
        ~html_ol_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_OL_H
