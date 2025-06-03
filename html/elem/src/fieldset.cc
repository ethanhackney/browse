#include "../include/fieldset.h"

html_fieldset_elem::html_fieldset_elem(void)
{
}

html_fieldset_elem::~html_fieldset_elem(void)
{
}

void html_fieldset_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_fieldset_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
