#include "../include/param.h"

html_param_elem::html_param_elem(void)
{
}

html_param_elem::~html_param_elem(void)
{
}

void html_param_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_param_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
