#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *types[] = {
	NULL,
	&wl_output_interface,
	&wl_surface_interface,
	&wl_output_interface,
	&wl_surface_interface,
	&wl_surface_interface,
	&wl_surface_interface,
	NULL,
	&wl_surface_interface,
	NULL,
	NULL,
	&wl_output_interface,
	&wl_surface_interface,
};

static const struct wl_message desktop_shell_requests[] = {
	{ "set_background", "oo", types + 1 },
	{ "set_panel", "oo", types + 3 },
	{ "set_lock_surface", "o", types + 5 },
	{ "unlock", "", types + 0 },
	{ "set_grab_surface", "o", types + 6 },
	{ "desktop_ready", "2", types + 0 },
	{ "set_panel_position", "3u", types + 0 },
	{ "exposay_launch", "", types + 0 },
};

static const struct wl_message desktop_shell_events[] = {
	{ "configure", "uoii", types + 7 },
	{ "prepare_lock_surface", "", types + 0 },
	{ "grab_cursor", "u", types + 0 },
};

WL_EXPORT const struct wl_interface desktop_shell_interface = {
	"desktop_shell", 3,
	8, desktop_shell_requests,
	3, desktop_shell_events,
};

static const struct wl_message screensaver_requests[] = {
	{ "set_surface", "oo", types + 11 },
};

WL_EXPORT const struct wl_interface screensaver_interface = {
	"screensaver", 1,
	1, screensaver_requests,
	0, NULL,
};

