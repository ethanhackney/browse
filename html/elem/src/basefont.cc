#include "../include/basefont.h"

html_basefont_elem::html_basefont_elem(void)
{
}

html_basefont_elem::~html_basefont_elem(void)
{
}

void html_basefont_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_basefont_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
