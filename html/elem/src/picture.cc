#include "../include/picture.h"

html_picture_elem::html_picture_elem(void)
{
}

html_picture_elem::~html_picture_elem(void)
{
}

void html_picture_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_picture_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
