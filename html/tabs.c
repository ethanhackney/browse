#include "html.h"
#include "tabs.h"

/* get actual attribute index */
#define ATTR_IDX(_attr) \
        ((_attr) - HTML_TT_ATTR_START)

/* get actual tag index */
#define TAG_IDX(_tag) \
        ((_tag) - HTML_TT_TAG_OPEN_START)

/* sizes for tables */
enum {
        NR_OPEN = HTML_TT_TAG_OPEN_END  - HTML_TT_TAG_OPEN_START  + 1,
        NR_ATTR = HTML_TT_ATTR_END      - HTML_TT_ATTR_START      + 1,
};

/* mapping from tag to valid attributes for that tag */
static const bool tag_attrs[NR_OPEN][NR_ATTR] = {
        [TAG_IDX(HTML_TT_TAG_FORM_OPEN)] = {
                [ATTR_IDX(HTML_TT_ATTR_START)] = true,
        },
};

/* mapping from open tag type to close tag type */
static const int tag_enders[NR_OPEN] = {
        [TAG_IDX(HTML_TT_TAG_FORM_OPEN)] = HTML_TT_TAG_FORM_CLOSE,
};

bool
attr_ok(int tag, int attr)
{
        return tag_attrs[tag][attr];
}

int
tag_end(int open)
{
        return tag_enders[open];
}
