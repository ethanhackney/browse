#include "../include/text.h"

html_text_elem::html_text_elem(int text)
        : _c {text}
{
}

html_text_elem::~html_text_elem(void)
{
}

void html_text_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_text_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}

int html_text_elem::c(void) const
{
        return _c;
}

std::size_t html_text_elem::child_len(void) const
{
        return 0;
}

std::shared_ptr<html_elem> html_text_elem::get_child(size_t i)
{
        static std::shared_ptr<html_elem> elem {nullptr};

        return elem;
}

const std::shared_ptr<html_elem> html_text_elem::get_cchild(std::size_t i) const
{
        static std::shared_ptr<html_elem> elem {nullptr};

        return elem;
}

void html_text_elem::append_child(std::shared_ptr<html_elem> elem)
{
}

void html_text_elem::rm_child(std::size_t i)
{
}

void html_text_elem::attr_add(int type, const std::string &val)
{
}

std::size_t html_text_elem::attr_len(void) const
{
        return 0;
}

const std::string &html_text_elem::attr_get_by_idx(std::size_t i) const
{
        static const std::string empty {""};
        return empty;
}

const std::string &html_text_elem::attr_get_by_type(int type) const
{
        static const std::string empty {""};
        return empty;
}
