#include "../include/factory.h"

std::shared_ptr<html_html_elem> html_elem_factory::html(void)
{
        return std::shared_ptr<html_html_elem> {new html_html_elem{}};
}

std::shared_ptr<html_text_elem> html_elem_factory::text(int c)
{
        return std::shared_ptr<html_text_elem> {new html_text_elem{c}};
}
