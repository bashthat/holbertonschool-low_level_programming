#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to end of list
 * @head: double pointer; head of a list
 * @n: the element to add the new node
 * Return: the location of new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	
	if (new = NULL)
		return (NULL);

	if (*head != NULL)
	{
		
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	new->next = NULL;
	new->prev = *head;
	new->n = n;

	return (new);
}
