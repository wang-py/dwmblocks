//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/statusbar/vpn.sh",					0,		10},
	
	{"", "~/.local/bin/statusbar/memory.sh",                        	30,		2},

//	{"", "~/bin/statusbar/volume",						0,		10},

//	{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	
//	{"", "~/bin/statusbar/battery",						5,		0},

	{"", "~/.local/bin/statusbar/temp.sh",  				5,		3},

	{"", "~/.local/bin/statusbar/clock.sh",					60,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
