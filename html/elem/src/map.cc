#include "../include/map.h"

html_map_elem::html_map_elem(void)
{
}

html_map_elem::~html_map_elem(void)
{
}

void html_map_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_map_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
