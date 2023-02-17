#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: Prints all single digits of base 10 from 0
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		printf("%d", b);

	printf("\n");
	return (0);
}
