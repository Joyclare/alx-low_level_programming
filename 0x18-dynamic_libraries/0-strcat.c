#include "main.h"

/**
 * _strcat - a function that join two strings
 * @dest: the string to append to
 * @src: the string to add
 * Author - Joyclare Cherono
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
		k++;

	while (src[l] != '\0')
	{
		dest[k] = src[l];
		l++;
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
