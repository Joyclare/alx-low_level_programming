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
	int j;
	unsigned int decimal_value = 0;

	if (b == 0)
		return (0);

	for (j = 0; b[j];)
		j++;
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[j] - '0');
	}
	return (decimal_value);
}
