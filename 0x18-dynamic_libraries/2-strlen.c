#include "main.h"

/**
 * _strlen - a function that returns the length of string
 * @s: the string to evaluate
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
