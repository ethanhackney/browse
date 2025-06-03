#include "../include/col.h"

html_col_elem::html_col_elem(void)
{
}

html_col_elem::~html_col_elem(void)
{
}

void html_col_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_col_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
