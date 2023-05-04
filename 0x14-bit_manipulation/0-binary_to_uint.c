#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: string with the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		val = 2 * val + (b[k] - '0');
	}

	return (val);
}
