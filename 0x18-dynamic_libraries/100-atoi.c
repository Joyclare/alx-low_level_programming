#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: string to be converted
 * Author - Joyclare Cherono
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, e, m, length, f, digit;

	j = 0;
	e = 0;
	m = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (j < length && f == 0)
	{
		if (s[j] == '-')
			++e;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (m);
}
