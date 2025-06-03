#include "../include/nav.h"

html_nav_elem::html_nav_elem(void)
{
}

html_nav_elem::~html_nav_elem(void)
{
}

void html_nav_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_nav_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
