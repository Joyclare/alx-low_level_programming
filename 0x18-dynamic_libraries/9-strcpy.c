#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: points to the buffer in which we copy the string
 * @src: string to be copied
 * Author - Joyclare Cherono
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
