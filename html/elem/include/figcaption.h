#ifndef HTML_ELEM_FIGCAPTION_H
#define HTML_ELEM_FIGCAPTION_H

#include "internal.h"

// <figcaption> element
class html_figcaption_elem : public html_internal_elem {
public:
        html_figcaption_elem();
        ~html_figcaption_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FIGCAPTION_H
