#ifndef HTML_ELEM_STYLE_H
#define HTML_ELEM_STYLE_H

#include "internal.h"

// <style> element
class html_style_elem : public html_internal_elem {
public:
        html_style_elem();
        ~html_style_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_STYLE_H
