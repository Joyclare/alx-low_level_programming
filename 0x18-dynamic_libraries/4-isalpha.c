#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to be checked
 * Author - Joyclare Cherono
 * Return: 1 if c is a letter
 * Otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
