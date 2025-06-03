#include "../include/dt.h"

html_dt_elem::html_dt_elem(void)
{
}

html_dt_elem::~html_dt_elem(void)
{
}

void html_dt_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_dt_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
