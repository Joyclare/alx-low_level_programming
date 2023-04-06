#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: points to the string containing binary number
 * Return: the converted number
 * or 0 if there is one or more chars
 * int the string b that is not 0 or 1
 * b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		j = (j << 1) + (*b++ - '0');
	}
	return (j);
}
