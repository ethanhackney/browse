#include "../include/input.h"

html_input_elem::html_input_elem(void)
{
}

html_input_elem::~html_input_elem(void)
{
}

void html_input_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_input_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
