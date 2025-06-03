#include "../include/img.h"

html_img_elem::html_img_elem(void)
{
}

html_img_elem::~html_img_elem(void)
{
}

void html_img_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_img_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
