#ifndef HTML_ELEM_OUTPUT_H
#define HTML_ELEM_OUTPUT_H

#include "internal.h"

// <output> element
class html_output_elem : public html_internal_elem {
public:
        html_output_elem();
        ~html_output_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_OUTPUT_H
