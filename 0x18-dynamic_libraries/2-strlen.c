#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string
 * Author - Joyclare Cherono
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}
