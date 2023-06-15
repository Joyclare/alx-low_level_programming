#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * @h: head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->pre != NULL)
		h = h->pre;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
