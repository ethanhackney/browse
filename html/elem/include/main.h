#ifndef HTML_ELEM_MAIN_H
#define HTML_ELEM_MAIN_H

#include "internal.h"

// <main> element
class html_main_elem : public html_internal_elem {
public:
        html_main_elem();
        ~html_main_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_MAIN_H
