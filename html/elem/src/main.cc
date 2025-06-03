#include "../include/main.h"

html_main_elem::html_main_elem(void)
{
}

html_main_elem::~html_main_elem(void)
{
}

void html_main_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_main_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
