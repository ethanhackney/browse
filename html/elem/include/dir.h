#ifndef HTML_ELEM_DIR_H
#define HTML_ELEM_DIR_H

#include "internal.h"

// <dir> element
class html_dir_elem : public html_internal_elem {
public:
        html_dir_elem();
        ~html_dir_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DIR_H
