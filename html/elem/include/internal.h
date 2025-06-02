#ifndef HTML_ELEM_INTERNAL_H
#define HTML_ELEM_INTERNAL_H

#include "elem.h"
#include <vector>

// html internal element
class html_internal_elem : public html_elem {
private:
        std::vector<html_elem *> _kids {}; // child elements
public:
        html_internal_elem();
        ~html_internal_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
        html_elem *get_child(size_t i) const;
        void add_append_child(html_elem *elem);
        void rm_child(size_t i);
};

#endif // HTML_ELEM_INTERNAL_H
