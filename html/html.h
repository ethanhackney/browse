#ifndef HTML_H
#define HTML_H

/* HTML token types */
enum {
        HTML_TT_TAG_OPEN = 1,  /* opening tag (must be > 0) */
        HTML_TT_TAG_CLOSE,     /* closing tag */
        HTML_TT_COUNT,         /* type count */
};

#endif /* #ifndef HTML_H */
