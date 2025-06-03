#ifndef HTML_ELEM_TABLE_H
#define HTML_ELEM_TABLE_H

#include "internal.h"

// <table> element
class html_table_elem : public html_internal_elem {
public:
        html_table_elem();
        ~html_table_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TABLE_H
