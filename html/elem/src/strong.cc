#include "../include/strong.h"

html_strong_elem::html_strong_elem(void)
{
}

html_strong_elem::~html_strong_elem(void)
{
}

void html_strong_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_strong_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
