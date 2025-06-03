#ifndef HTML_ELEM_CODE_H
#define HTML_ELEM_CODE_H

#include "internal.h"

// <code> element
class html_code_elem : public html_internal_elem {
public:
        html_code_elem();
        ~html_code_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_CODE_H
