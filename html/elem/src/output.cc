#include "../include/output.h"

html_output_elem::html_output_elem(void)
{
}

html_output_elem::~html_output_elem(void)
{
}

void html_output_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_output_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
