#include "../include/link.h"

html_link_elem::html_link_elem(void)
{
}

html_link_elem::~html_link_elem(void)
{
}

void html_link_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_link_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
