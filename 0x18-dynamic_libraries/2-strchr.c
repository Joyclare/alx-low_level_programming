#include "main.h"
#include <stdio.h>

/**
 * *_strchr - l function that locates a character in a string
 * @s: string
 * @c: char
 * Author - Joyclare Cherono
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int d;

		while (1)
		{
			d = *s++;
			if (d == c)
			{
				return (s - 1);
			}
			if (d == 0)
			{
				return (NULL);
			}
		}
}
