#include "lists.h"

/**
 * print_dlistint - a function that  prints all the elements
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->pre != NULL)
		h = h->pre;

	while (h != NULL)
	{
		printf("%d\n", h->j);
		c++;
		h = h->next;
	}

	return (c);
}
