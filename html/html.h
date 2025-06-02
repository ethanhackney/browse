#ifndef HTML_H
#define HTML_H

/* HTML token types */
enum {
        HTML_TT_TAG_CLOSE = 1, /* </tag> (must be > 0) */
        HTML_TT_TAG_OPEN,      /* <tag> (must be > 0) */
        HTML_TT_COUNT,         /* type count */
};

/* tags */
enum {
        HTML_TAG_HTML,  /* <html> */
        HTML_TAG_BODY,  /* <body> */
        HTML_TAG_H1,    /* <h1> */
        HTML_TAG_P,     /* <p> */
        HTML_TAG_COUNT, /* tag count */
};

#endif /* #ifndef HTML_H */
