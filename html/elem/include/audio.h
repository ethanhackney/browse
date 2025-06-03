#ifndef HTML_ELEM_AUDIO_H
#define HTML_ELEM_AUDIO_H

#include "internal.h"

// <audio> element
class html_audio_elem : public html_internal_elem {
public:
        html_audio_elem();
        ~html_audio_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_AUDIO_H
