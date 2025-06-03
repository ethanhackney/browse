#ifndef HTML_ELEM_CITE_H
#define HTML_ELEM_CITE_H

#include "internal.h"

// <cite> element
class html_cite_elem : public html_internal_elem {
public:
        html_cite_elem();
        ~html_cite_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_CITE_H
