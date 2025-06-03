#include "../include/th.h"

html_th_elem::html_th_elem(void)
{
}

html_th_elem::~html_th_elem(void)
{
}

void html_th_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_th_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
