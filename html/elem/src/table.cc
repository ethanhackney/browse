#include "../include/table.h"

html_table_elem::html_table_elem(void)
{
}

html_table_elem::~html_table_elem(void)
{
}

void html_table_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_table_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
