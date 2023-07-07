#include "hash_tables.h"

/**
 * hash_djb2 - Hash function that implements the djb2 algorithm
 * @str: string to hash
 * Author - Joyclare Cherono
 * Return: The calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int v;

	hash = 5381;
	while ((v = *str++))
		hash = ((hash << 5) + hash) + v; /* hash * 33 + v */

	return (hash);
}
