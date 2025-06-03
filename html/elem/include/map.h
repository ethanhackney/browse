#ifndef HTML_ELEM_MAP_H
#define HTML_ELEM_MAP_H

#include "internal.h"

// <map> element
class html_map_elem : public html_internal_elem {
public:
        html_map_elem();
        ~html_map_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_MAP_H
