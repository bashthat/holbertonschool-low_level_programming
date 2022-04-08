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
	if (!new)
	return (NULL);
	
	new->next = NULL;
	new->n = n;

	if (!head)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
	while (temp->next != NULL)

	new->next = NULL;
	new->prev = tmp;
	tmp->next = new;
	}
	return (new);
}
