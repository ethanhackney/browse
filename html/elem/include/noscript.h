#ifndef HTML_ELEM_NOSCRIPT_H
#define HTML_ELEM_NOSCRIPT_H

#include "internal.h"

// <noscript> element
class html_noscript_elem : public html_internal_elem {
public:
        html_noscript_elem();
        ~html_noscript_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_NOSCRIPT_H
