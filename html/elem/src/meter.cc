#include "../include/meter.h"

html_meter_elem::html_meter_elem(void)
{
}

html_meter_elem::~html_meter_elem(void)
{
}

void html_meter_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_meter_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
