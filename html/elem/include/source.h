#ifndef HTML_ELEM_SOURCE_H
#define HTML_ELEM_SOURCE_H

#include "internal.h"

// <source> element
class html_source_elem : public html_internal_elem {
public:
        html_source_elem();
        ~html_source_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SOURCE_H
