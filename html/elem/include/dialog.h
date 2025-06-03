#ifndef HTML_ELEM_DIALOG_H
#define HTML_ELEM_DIALOG_H

#include "internal.h"

// <dialog> element
class html_dialog_elem : public html_internal_elem {
public:
        html_dialog_elem();
        ~html_dialog_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DIALOG_H
