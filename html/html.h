#ifndef HTML_H
#define HTML_H

#include <stdbool.h>

/* HTML token types */
enum {
        HTML_TT_TAG_START = 1, /* start of tag token (must be > 0) */
        HTML_TT_HTML_OPEN,     /* <html> */
        HTML_TT_BODY_OPEN,     /* <body> */
        HTML_TT_H1_OPEN,       /* <h1> */
        HTML_TT_P_OPEN,        /* <p> */
        HTML_TT_HTML_CLOSE,    /* </html> */
        HTML_TT_BODY_CLOSE,    /* </body> */
        HTML_TT_H1_CLOSE,      /* </h1> */
        HTML_TT_P_CLOSE,       /* </p> */
        HTML_TT_TAG_END,       /* </tag> (must be > 0) */
        HTML_TT_COUNT,         /* type count */
};

/* test if token is tag */
static inline bool
istag(int tt)
{
        return HTML_TT_TAG_START < tt && tt < HTML_TT_TAG_END;
}

/* tags */
enum {
        HTML_TAG_HTML,  /* <html> */
        HTML_TAG_BODY,  /* <body> */
        HTML_TAG_H1,    /* <h1> */
        HTML_TAG_P,     /* <p> */
        HTML_TAG_COUNT, /* tag count */
};

#endif /* #ifndef HTML_H */
