#ifndef HTML_ELEM_BLOCKQUOTE_H
#define HTML_ELEM_BLOCKQUOTE_H

#include "internal.h"

// <blockquote> element
class html_blockquote_elem : public html_internal_elem {
public:
        html_blockquote_elem();
        ~html_blockquote_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BLOCKQUOTE_H
