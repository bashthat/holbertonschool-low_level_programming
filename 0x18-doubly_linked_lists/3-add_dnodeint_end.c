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
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if
	(new = NULL)
	{
	return (NULL);
	}

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)

	temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
