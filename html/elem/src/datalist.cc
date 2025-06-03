#include "../include/datalist.h"

html_datalist_elem::html_datalist_elem(void)
{
}

html_datalist_elem::~html_datalist_elem(void)
{
}

void html_datalist_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_datalist_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
