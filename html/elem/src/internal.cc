#include "../include/internal.h"

html_internal_elem::html_internal_elem(void)
{
}

html_internal_elem::~html_internal_elem(void)
{
}

html_elem *html_internal_elem::get_child(size_t i) const
{
        return _kids.at(i);
}

void html_internal_elem::add_append_child(html_elem *elem)
{
        _kids.push_back(elem);
}

void html_internal_elem::rm_child(size_t i)
{
        _kids.erase(_kids.begin() + i);
}

void html_internal_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_internal_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
