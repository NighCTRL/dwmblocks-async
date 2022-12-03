#define CMDLENGTH 45
#define DELIMITER " "
#define LEADING_DELIMITER  " "
// #define CLICKABLE_BLOCKS 0

const Block blocks[] = {
  BLOCK("status-volume", 0, 1),
  BLOCK("status-ram", 1, 2),
  BLOCK("status-battery", 60, 3),
  BLOCK("status-vpn", 0, 4),
  BLOCK("status-wifi", 0, 5),
  BLOCK("status-date", 0, 6),
  BLOCK("printf ' %s' $(date +%T)", 1, 7),
	// BLOCK("sb-music",   0,    18),
	// BLOCK("sb-disk",    1800, 19),
	// BLOCK("sb-memory",  10,   20),
	// BLOCK("sb-loadavg", 5,    21),
	// BLOCK("sb-mic",     0,    26),
	// BLOCK("sb-record",  0,    27),
	// BLOCK("sb-volume",  0,    22),
	// BLOCK("sb-battery", 5,    23),
	// BLOCK("sb-date",    1,    24)
};
