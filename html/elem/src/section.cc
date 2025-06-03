#include "../include/section.h"

html_section_elem::html_section_elem(void)
{
}

html_section_elem::~html_section_elem(void)
{
}

void html_section_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_section_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
