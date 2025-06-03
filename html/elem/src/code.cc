#include "../include/code.h"

html_code_elem::html_code_elem(void)
{
}

html_code_elem::~html_code_elem(void)
{
}

void html_code_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_code_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
