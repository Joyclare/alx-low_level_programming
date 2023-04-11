#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Returns: 0 if big endian,
 * 1 if little endian
 *
 */

int get_endianness(void)
{
	int j;
	char *c;

	j = 1;
	c = (char *) &j;
	return ((int)*c);
}
