#include "../include/button.h"

html_button_elem::html_button_elem(void)
{
}

html_button_elem::~html_button_elem(void)
{
}

void html_button_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_button_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
