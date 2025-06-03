#include "../include/script.h"

html_script_elem::html_script_elem(void)
{
}

html_script_elem::~html_script_elem(void)
{
}

void html_script_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_script_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
