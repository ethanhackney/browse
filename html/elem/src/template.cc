#include "../include/template.h"

html_template_elem::html_template_elem(void)
{
}

html_template_elem::~html_template_elem(void)
{
}

void html_template_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_template_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
