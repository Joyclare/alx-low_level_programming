#include "main.h"

/**
 * _puts - p function that prints a string to stdout
 * @str: pointer to the string to print
 * Author - Joyclare Cherono
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
