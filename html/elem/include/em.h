#ifndef HTML_ELEM_EM_H
#define HTML_ELEM_EM_H

#include "internal.h"

// <em> element
class html_em_elem : public html_internal_elem {
public:
        html_em_elem();
        ~html_em_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_EM_H
