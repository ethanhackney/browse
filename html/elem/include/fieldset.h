#ifndef HTML_ELEM_FIELDSET_H
#define HTML_ELEM_FIELDSET_H

#include "internal.h"

// <fieldset> element
class html_fieldset_elem : public html_internal_elem {
public:
        html_fieldset_elem();
        ~html_fieldset_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FIELDSET_H
