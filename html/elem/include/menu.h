#ifndef HTML_ELEM_MENU_H
#define HTML_ELEM_MENU_H

#include "internal.h"

// <menu> element
class html_menu_elem : public html_internal_elem {
public:
        html_menu_elem();
        ~html_menu_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_MENU_H
