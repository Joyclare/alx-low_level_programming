#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: a string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, e, m, length, g, digit;

	j = 0;
	e = 0;
	m = 0;
	length = 0;
	g = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (j < length && g == 0)
	{
		if (s[j] == '-')
			++e;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			g = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);

	return (m);
}
