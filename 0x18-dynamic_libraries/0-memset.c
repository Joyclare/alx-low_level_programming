#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * Author - Joyclare cherono
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
