#ifndef HTML_ELEM_BUTTON_H
#define HTML_ELEM_BUTTON_H

#include "internal.h"

// <button> element
class html_button_elem : public html_internal_elem {
public:
        html_button_elem();
        ~html_button_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BUTTON_H
