#include "../include/s.h"

html_s_elem::html_s_elem(void)
{
}

html_s_elem::~html_s_elem(void)
{
}

void html_s_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_s_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
