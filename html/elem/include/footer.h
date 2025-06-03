#ifndef HTML_ELEM_FOOTER_H
#define HTML_ELEM_FOOTER_H

#include "internal.h"

// <footer> element
class html_footer_elem : public html_internal_elem {
public:
        html_footer_elem();
        ~html_footer_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FOOTER_H
