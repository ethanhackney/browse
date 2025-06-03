#include "../include/object.h"

html_object_elem::html_object_elem(void)
{
}

html_object_elem::~html_object_elem(void)
{
}

void html_object_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_object_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
