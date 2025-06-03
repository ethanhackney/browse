#ifndef HTML_ELEM_LEGEND_H
#define HTML_ELEM_LEGEND_H

#include "internal.h"

// <legend> element
class html_legend_elem : public html_internal_elem {
public:
        html_legend_elem();
        ~html_legend_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_LEGEND_H
