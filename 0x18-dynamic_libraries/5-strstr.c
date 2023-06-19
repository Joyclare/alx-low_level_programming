#include "main.h"
#include <stdio.h>

/**
 * *_strstr -  a fuction that locates a substring
 * @haystack:  the string to search in
 * @needle: the substring to look for
 * Author - Joyclare Cherono
 * Return:  a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[j + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[j]);
	}
	return (NULL);
}
