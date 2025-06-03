#include "../include/figcaption.h"

html_figcaption_elem::html_figcaption_elem(void)
{
}

html_figcaption_elem::~html_figcaption_elem(void)
{
}

void html_figcaption_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_figcaption_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
