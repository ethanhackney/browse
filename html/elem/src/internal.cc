#include "../include/internal.h"

html_internal_elem::html_internal_elem(void)
{
}

html_internal_elem::~html_internal_elem(void)
{
}

std::size_t html_internal_elem::child_len(void) const
{
        return _kids.size();
}

std::shared_ptr<html_elem> &html_internal_elem::get_child(size_t i)
{
        return _kids.at(i);
}

const std::shared_ptr<html_elem> &html_internal_elem::get_cchild(std::size_t i) const
{
        return _kids.at(i);
}

void html_internal_elem::append_child(std::shared_ptr<html_elem> &elem)
{
        _kids.push_back(elem);
}

void html_internal_elem::rm_child(size_t i)
{
        _kids.erase(_kids.begin() + i);
}
