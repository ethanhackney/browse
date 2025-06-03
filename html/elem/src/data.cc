#include "../include/data.h"

html_data_elem::html_data_elem(void)
{
}

html_data_elem::~html_data_elem(void)
{
}

void html_data_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_data_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
