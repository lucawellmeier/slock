/* user and group to drop privileges to */
static const char *user  = "luca";
static const char *group = "luca";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* allow control key to trigger fail on clear */
static int controlkeyclear = 1;
