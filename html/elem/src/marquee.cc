#include "../include/marquee.h"

html_marquee_elem::html_marquee_elem(void)
{
}

html_marquee_elem::~html_marquee_elem(void)
{
}

void html_marquee_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_marquee_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
