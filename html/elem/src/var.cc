#include "../include/var.h"

html_var_elem::html_var_elem(void)
{
}

html_var_elem::~html_var_elem(void)
{
}

void html_var_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_var_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
