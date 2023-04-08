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
	unsigned int j;
	int str_len, bit_value;

	/* check if input string is NULL*/
	if (!b)
		return (0);

	j = 0;
	/* Initialize final result to 0 */

	for (str_len = 0; b[str_len] != '\0')
		str_len++;

	/* iterate through input string to determine its length*/

	for (str_len--, bit_value = 1; str_len >= 0; str_len--, bit_value *= 2)
	{
		if (b[str_len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[str_len] & 1)
		{
			j += bit_value;
		}
	}
	return (j);
}
