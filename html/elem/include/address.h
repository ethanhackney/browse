#ifndef HTML_ELEM_ADDRESS_H
#define HTML_ELEM_ADDRESS_H

#include "internal.h"

// <address> element
class html_address_elem : public html_internal_elem {
public:
        html_address_elem();
        ~html_address_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_ADDRESS_H
