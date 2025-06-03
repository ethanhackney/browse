#include "../include/image.h"

html_image_elem::html_image_elem(void)
{
}

html_image_elem::~html_image_elem(void)
{
}

void html_image_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_image_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
