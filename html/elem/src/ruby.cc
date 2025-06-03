#include "../include/ruby.h"

html_ruby_elem::html_ruby_elem(void)
{
}

html_ruby_elem::~html_ruby_elem(void)
{
}

void html_ruby_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_ruby_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
