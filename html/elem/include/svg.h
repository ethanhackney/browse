#ifndef HTML_ELEM_SVG_H
#define HTML_ELEM_SVG_H

#include "internal.h"

// <svg> element
class html_svg_elem : public html_internal_elem {
public:
        html_svg_elem();
        ~html_svg_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SVG_H
