#ifndef HTML_ELEM_IFRAME_H
#define HTML_ELEM_IFRAME_H

#include "internal.h"

// <iframe> element
class html_iframe_elem : public html_internal_elem {
public:
        html_iframe_elem();
        ~html_iframe_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_IFRAME_H
