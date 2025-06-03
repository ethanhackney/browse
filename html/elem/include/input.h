#ifndef HTML_ELEM_INPUT_H
#define HTML_ELEM_INPUT_H

#include "internal.h"

// <input> element
class html_input_elem : public html_internal_elem {
public:
        html_input_elem();
        ~html_input_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_INPUT_H
