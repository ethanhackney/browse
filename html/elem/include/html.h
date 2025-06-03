#ifndef HTML_ELEM_HTML_H
#define HTML_ELEM_HTML_H

#include "internal.h"

// <html> element
class html_html_elem : public html_internal_elem {
public:
        html_html_elem();
        ~html_html_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_HTML_H
