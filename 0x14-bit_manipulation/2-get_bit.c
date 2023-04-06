#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: is the unsingned long int
 * @index: index
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nm;

	if (n == 0 && index < 64)
		return (0);
	for (nm = 0; nm <= 63; n >>= 1)
		nm++;
	{
		if (index == nm)
		{
			return (n & 1);
		}
	}
	return (-1);
}
