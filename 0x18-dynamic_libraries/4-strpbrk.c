#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: a string to search
 * @accept: string with the bytes to look for
 * Author - Joyclare Cherono
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; *s != '\0'; j++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
