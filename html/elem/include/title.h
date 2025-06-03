#ifndef HTML_ELEM_TITLE_H
#define HTML_ELEM_TITLE_H

#include "internal.h"

// <title> element
class html_title_elem : public html_internal_elem {
public:
        html_title_elem();
        ~html_title_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TITLE_H
