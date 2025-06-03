#ifndef HTML_ELEM_INS_H
#define HTML_ELEM_INS_H

#include "internal.h"

// <ins> element
class html_ins_elem : public html_internal_elem {
public:
        html_ins_elem();
        ~html_ins_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_INS_H
