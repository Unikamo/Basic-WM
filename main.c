#include <stdio.h>
#include <X11/Xlib.h>

int main(void)
{
	Display * dply;
	XWindowAttributes w_attr;
	XButtonEvent b_event;
	XEvent x_evnt;

	if (!(dply = XOpenDisplay(0x0))) {
		return 1;
	}

	b_event.subwindow = None;

	for (;;) {
		XNextEvent(dply, x_evnt);
	}
}
