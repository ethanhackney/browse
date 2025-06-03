#include "../include/area.h"

html_area_elem::html_area_elem(void)
{
}

html_area_elem::~html_area_elem(void)
{
}

void html_area_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_area_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
