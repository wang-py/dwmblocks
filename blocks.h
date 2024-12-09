//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/statusbar/audio.sh",				0,		5},

	{"", "~/.local/bin/statusbar/vpn.sh",					0,		1},
	
	{"", "~/.local/bin/statusbar/gpu.sh",					5,		10},

	{"", "~/.local/bin/statusbar/memory.sh",               	30,		2},

	{"", "~/.local/bin/statusbar/cpu.sh",  				5,		3},

//	{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	
//	{"", "~/bin/statusbar/battery",						5,		0},

	{"", "~/.local/bin/statusbar/clock.sh",					60,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
