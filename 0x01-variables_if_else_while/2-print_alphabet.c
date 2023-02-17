#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
 * main - start point
 * Description: print a to z
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
