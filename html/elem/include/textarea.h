#ifndef HTML_ELEM_TEXTAREA_H
#define HTML_ELEM_TEXTAREA_H

#include "internal.h"

// <textarea> element
class html_textarea_elem : public html_internal_elem {
public:
        html_textarea_elem();
        ~html_textarea_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TEXTAREA_H
