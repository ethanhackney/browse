#ifndef HTML_ELEM_ABBR_H
#define HTML_ELEM_ABBR_H

#include "internal.h"

// <abbr> element
class html_abbr_elem : public html_internal_elem {
public:
        html_abbr_elem();
        ~html_abbr_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_ABBR_H
