#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * @head: pointer to the head of the dlistint_t list
 * @n: integer for the new node
 *
 * Return: If the function fails - NULL
 * Otherwise - the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->j = n;
new->next = NULL;
new->pre = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
new->pre = tmp;
return (new);
}
