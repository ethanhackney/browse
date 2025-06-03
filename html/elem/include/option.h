#ifndef HTML_ELEM_OPTION_H
#define HTML_ELEM_OPTION_H

#include "internal.h"

// <option> element
class html_option_elem : public html_internal_elem {
public:
        html_option_elem();
        ~html_option_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_OPTION_H
