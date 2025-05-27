#include <cairo/cairo.h>
#include <cairo/cairo-xlib.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
        cairo_surface_t *surface = NULL;
        Display *display = NULL;
        cairo_t *cr = NULL;
        Window window;
        XEvent event;
        int screen = -1;

        // connect to x
        display = XOpenDisplay(NULL);
        if (display == NULL) {
                perror("XOpenDisplay");
                exit(1);
        }

        // get screen
        screen = DefaultScreen(display);

        // create window
        window = XCreateSimpleWindow(display,
                                     RootWindow(display, screen),
                                     10,
                                     10,
                                     800,
                                     600,
                                     1,
                                     BlackPixel(display, screen),
                                     WhitePixel(display, screen));

        // what events do we care about?
        XSelectInput(display, window, ExposureMask | KeyPressMask);

        // show the window
        XMapWindow(display, window);
        XFlush(display);

        surface = cairo_xlib_surface_create(display,
                                            window,
                                            DefaultVisual(display, screen),
                                            800,
                                            600);

        cr = cairo_create(surface);

        // event loop
        for (;;) {
                // get next event
                XNextEvent(display, &event);

                // key press?
                if (event.type == KeyPress)
                        break;

                // not expose?
                if (event.type != Expose)
                        continue;

                cairo_set_source_rgb(cr, 0, 0, 0);
                cairo_select_font_face(cr,
                                       "Sans",
                                       CAIRO_FONT_SLANT_NORMAL,
                                       CAIRO_FONT_WEIGHT_BOLD);
                cairo_set_font_size(cr, 72.0);

                cairo_move_to(cr, 100, 100);
                cairo_show_text(cr, "Hello world!");
        }

        // cleanup
        cairo_destroy(cr);
        cairo_surface_finish(surface);
        cairo_surface_destroy(surface);
        XDestroyWindow(display, window);
        XCloseDisplay(display);
}
