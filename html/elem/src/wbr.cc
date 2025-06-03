#include "../include/wbr.h"

html_wbr_elem::html_wbr_elem(void)
{
}

html_wbr_elem::~html_wbr_elem(void)
{
}

void html_wbr_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_wbr_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
