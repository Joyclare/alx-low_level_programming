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
	unsigned int ui;
	int length, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
