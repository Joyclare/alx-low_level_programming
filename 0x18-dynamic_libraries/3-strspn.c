#include "main.h"

/**
 * *_strspn - a function that gets the length of a prefix substring
 * @s: a string to evaluate
 * @accept: string with the list of characters to match in s
 * Author - Joyclare Cherono
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, g, flag;

	g = 0;

	for (j = 0; s[k] != '\0'; j++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[k] == accept[k])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (g);
		}
	}

	return (0);
}
