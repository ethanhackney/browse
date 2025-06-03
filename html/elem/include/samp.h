#ifndef HTML_ELEM_SAMP_H
#define HTML_ELEM_SAMP_H

#include "internal.h"

// <samp> element
class html_samp_elem : public html_internal_elem {
public:
        html_samp_elem();
        ~html_samp_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SAMP_H
