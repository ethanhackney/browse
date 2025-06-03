#include "../include/menu.h"

html_menu_elem::html_menu_elem(void)
{
}

html_menu_elem::~html_menu_elem(void)
{
}

void html_menu_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_menu_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
