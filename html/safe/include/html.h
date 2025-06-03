#ifndef HTML_HTML_ELEM_H
#define HTML_HTML_ELEM_H

#include "internal.h"

// <html> element
class html_html_elem : public html_internal_elem {
public:
        html_html_elem();
        ~html_html_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // #ifndef HTML_HTML_ELEM_H
