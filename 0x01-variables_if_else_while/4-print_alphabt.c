#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints a to z except q and e
 * Return: 0
 */

int main(void)
{
	int al, e, q;

	e = 'e';
	q = 'q';

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != e && al != q)
			putchar(al);
	}
	putchar('\n');
	return (0);
}
