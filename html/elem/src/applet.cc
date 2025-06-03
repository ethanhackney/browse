#include "../include/applet.h"

html_applet_elem::html_applet_elem(void)
{
}

html_applet_elem::~html_applet_elem(void)
{
}

void html_applet_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_applet_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
