#ifndef HTML_ELEM_LABEL_H
#define HTML_ELEM_LABEL_H

#include "internal.h"

// <label> element
class html_label_elem : public html_internal_elem {
public:
        html_label_elem();
        ~html_label_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_LABEL_H
