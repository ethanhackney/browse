#include "../include/rt.h"

html_rt_elem::html_rt_elem(void)
{
}

html_rt_elem::~html_rt_elem(void)
{
}

void html_rt_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_rt_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
