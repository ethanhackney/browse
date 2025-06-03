#include "../include/title.h"

html_title_elem::html_title_elem(void)
{
}

html_title_elem::~html_title_elem(void)
{
}

void html_title_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_title_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
