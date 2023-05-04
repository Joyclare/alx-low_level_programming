#include "main.h"

/**
 * print_binary - a function that prints the binary
 * equivalent of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int q, count = 0;
	unsigned long int c;

	for (q = 63; q >= 0; q--)
	{
		c = n >> q;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
