#ifndef HTML_ELEM_S_H
#define HTML_ELEM_S_H

#include "internal.h"

// <s> element
class html_s_elem : public html_internal_elem {
public:
        html_s_elem();
        ~html_s_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_S_H
