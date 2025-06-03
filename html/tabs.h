#ifndef HTML_TABS_H
#define HTML_TABS_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * test if attribute is okay for tag:
 *
 * args:
 *  @tag:  tag token type
 *  @attr: attribute token type
 *
 * ret:
 *  @true:  if ok
 *  @false: if not
 */
bool attr_ok(int tag, int attr);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef HTML_TABS_H */
