#ifndef HTML_ELEM_EMBED_H
#define HTML_ELEM_EMBED_H

#include "internal.h"

// <embed> element
class html_embed_elem : public html_internal_elem {
public:
        html_embed_elem();
        ~html_embed_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_EMBED_H
