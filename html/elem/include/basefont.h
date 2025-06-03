#ifndef HTML_ELEM_BASEFONT_H
#define HTML_ELEM_BASEFONT_H

#include "internal.h"

// <basefont> element
class html_basefont_elem : public html_internal_elem {
public:
        html_basefont_elem();
        ~html_basefont_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BASEFONT_H
