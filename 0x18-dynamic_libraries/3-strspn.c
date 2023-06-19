#include "main.h"

/**
 * *_strspn -a function that gets the length of a prefix substring
 * @s: string
 * @accept: string containing the list of characters to match in s
 * Author - Joyclare Cherono
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, f, flag;

	f = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
