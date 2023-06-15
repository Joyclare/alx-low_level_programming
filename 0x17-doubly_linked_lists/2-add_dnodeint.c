#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * @head: points to the head
 * @n: integer for the new node to contain
 *
 * Return: If the function fails - NULL
 * Otherwise - the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->j = n;
new->next = *head;
new->pre = NULL;
if (*head != NULL)
{
(*head)->pre = new;
}
*head = new;
return (new);
}
