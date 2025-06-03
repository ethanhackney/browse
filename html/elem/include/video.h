#ifndef HTML_ELEM_VIDEO_H
#define HTML_ELEM_VIDEO_H

#include "internal.h"

// <video> element
class html_video_elem : public html_internal_elem {
public:
        html_video_elem();
        ~html_video_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_VIDEO_H
