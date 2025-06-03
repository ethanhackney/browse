#include "../include/address.h"

html_address_elem::html_address_elem(void)
{
}

html_address_elem::~html_address_elem(void)
{
}

void html_address_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_address_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
