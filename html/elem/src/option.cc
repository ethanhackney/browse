#include "../include/option.h"

html_option_elem::html_option_elem(void)
{
}

html_option_elem::~html_option_elem(void)
{
}

void html_option_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_option_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
