#include "../include/bdi.h"

html_bdi_elem::html_bdi_elem(void)
{
}

html_bdi_elem::~html_bdi_elem(void)
{
}

void html_bdi_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_bdi_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
