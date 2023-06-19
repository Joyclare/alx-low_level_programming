#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: destination
 * @src: the memory area to copy from
 * @n: the number of bytes to copy
 * Author - Joyclare Cherono
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
