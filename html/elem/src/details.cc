#include "../include/details.h"

html_details_elem::html_details_elem(void)
{
}

html_details_elem::~html_details_elem(void)
{
}

void html_details_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_details_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
