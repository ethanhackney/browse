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

html_elem *html_internal_elem::get_child(std::size_t i) const
{
        return _kids.at(i).get();
}

const html_elem *html_internal_elem::get_cchild(std::size_t i) const
{
        return _kids.at(i).get();
}

void html_internal_elem::append_child(std::unique_ptr<html_elem> elem)
{
        _kids.push_back(std::move(elem));
}

void html_internal_elem::rm_child(std::size_t i)
{
        _kids.erase(_kids.begin() + i);
}

void html_internal_elem::attr_add(int type, const std::string &val)
{
        if (_attrmap.find(type) == _attrmap.end())
                _attr.push_back(type);

        _attrmap[type] = val;
}

std::size_t html_internal_elem::attr_len(void) const
{
        return _attr.size();
}

const std::string &html_internal_elem::attr_get_by_idx(std::size_t i) const
{
        return attr_get_by_type(_attr.at(i));
}

const std::string &html_internal_elem::attr_get_by_type(int type) const
{
        static const std::string empty {""};

        auto p = _attrmap.find(type);

        if (p != _attrmap.end())
                return p->second;

        return empty;
}

int html_internal_elem::attr_get(std::size_t i) const
{
        return _attr.at(i);
}
