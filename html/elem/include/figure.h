#ifndef HTML_ELEM_FIGURE_H
#define HTML_ELEM_FIGURE_H

#include "internal.h"

// <figure> element
class html_figure_elem : public html_internal_elem {
public:
        html_figure_elem();
        ~html_figure_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FIGURE_H
