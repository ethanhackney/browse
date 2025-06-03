#ifndef HTML_ELEM_SECTION_H
#define HTML_ELEM_SECTION_H

#include "internal.h"

// <section> element
class html_section_elem : public html_internal_elem {
public:
        html_section_elem();
        ~html_section_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SECTION_H
