#ifndef HTML_ELEM_ACRONYM_H
#define HTML_ELEM_ACRONYM_H

#include "internal.h"

// <acronym> element
class html_acronym_elem : public html_internal_elem {
public:
        html_acronym_elem();
        ~html_acronym_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_ACRONYM_H
