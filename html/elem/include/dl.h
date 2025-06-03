#ifndef HTML_ELEM_DL_H
#define HTML_ELEM_DL_H

#include "internal.h"

// <dl> element
class html_dl_elem : public html_internal_elem {
public:
        html_dl_elem();
        ~html_dl_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DL_H
