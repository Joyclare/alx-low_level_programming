#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int cur;

	for (a = 63; a >= 0; a--)
	{
		cur = n >> a;
		if (cur & 1)
		{
			_putchar('1'
					coun++;
					}
					else if (count)
					_putchar('0');
					}
					if (!count)
					_putchar('0');
					}
