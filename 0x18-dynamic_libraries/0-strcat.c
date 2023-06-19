#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Author - Joyclare Cherono
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
		j++;

	while (src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
