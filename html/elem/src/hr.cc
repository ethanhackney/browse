#include "../include/hr.h"

html_hr_elem::html_hr_elem(void)
{
}

html_hr_elem::~html_hr_elem(void)
{
}

void html_hr_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_hr_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
