#include "../include/form.h"

html_form_elem::html_form_elem(void)
{
}

html_form_elem::~html_form_elem(void)
{
}

void html_form_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_form_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
