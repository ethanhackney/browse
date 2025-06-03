#include "../include/ins.h"

html_ins_elem::html_ins_elem(void)
{
}

html_ins_elem::~html_ins_elem(void)
{
}

void html_ins_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_ins_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
