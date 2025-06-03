#ifndef HTML_ELEM_SEARCH_H
#define HTML_ELEM_SEARCH_H

#include "internal.h"

// <search> element
class html_search_elem : public html_internal_elem {
public:
        html_search_elem();
        ~html_search_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SEARCH_H
