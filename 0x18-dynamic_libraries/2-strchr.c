#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: the string to be searched
 * @c: char to find
 * Author - Joyclare Cherono
 * Return: pointer to the first occurrence of the character
 * c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int b;

		while (1)
		{
			b = *s++;
			if (b == c)
			{
				return (s - 1);
			}
			if (b == 0)
			{
				return (NULL);
			}
		}
}
