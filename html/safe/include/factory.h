#ifndef HTML_ELEM_FACTORY_H
#define HTML_ELEM_FACTORY_H

#include "elem.h"
#include "html.h"
#include "text.h"

// html_elem factory
class html_elem_factory {
public:
        std::shared_ptr<html_html_elem> html(void);
        std::shared_ptr<html_text_elem> text(int c);
};

#endif // #ifndef HTML_ELEM_FACTORY_H
