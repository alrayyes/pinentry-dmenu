/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int bottom = 0;
static int embedded = 0;
static int minpwlen = 32;
static int mon = -1;

static const char *asterisk = "*";
static const char *fonts[] = {
    "SauceCodePro Nerd Font Mono:style=Regular:pixelsize=18:antialias=true:autohint=true"
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#bbbbbb", "#222222" },
	[SchemeNormal] = { "#bbbbbb", "#222222" },
	[SchemeSelect] = { "#eeeeee", "#005577" },
	[SchemeDesc]   = { "#bbbbbb", "#222222" }
};
