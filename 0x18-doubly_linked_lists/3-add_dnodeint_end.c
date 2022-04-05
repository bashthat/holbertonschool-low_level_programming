#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to end of list
 * @head: double pointer; head of a list
 * @n: the element to add the new node
 * Return: the location of new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	
	last = *head;

		while (last->next)
			last = last->next;
		last->next = new;
		new->prev = last;

	return (new);
}
