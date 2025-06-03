#include "../include/footer.h"

html_footer_elem::html_footer_elem(void)
{
}

html_footer_elem::~html_footer_elem(void)
{
}

void html_footer_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_footer_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
