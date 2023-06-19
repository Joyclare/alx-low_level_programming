#include "main.h"

/**
 * _strncpy -  a function that copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Author - Joyclare Cherono
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
