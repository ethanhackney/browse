#include "../include/li.h"

html_li_elem::html_li_elem(void)
{
}

html_li_elem::~html_li_elem(void)
{
}

void html_li_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_li_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
