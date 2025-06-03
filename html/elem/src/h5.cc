#include "../include/h5.h"

html_h5_elem::html_h5_elem(void)
{
}

html_h5_elem::~html_h5_elem(void)
{
}

void html_h5_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_h5_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
