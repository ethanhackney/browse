#ifndef HTML_ELEM_KBD_H
#define HTML_ELEM_KBD_H

#include "internal.h"

// <kbd> element
class html_kbd_elem : public html_internal_elem {
public:
        html_kbd_elem();
        ~html_kbd_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_KBD_H
