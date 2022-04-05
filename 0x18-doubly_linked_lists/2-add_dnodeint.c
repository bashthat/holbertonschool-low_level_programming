#include "lists.h"

/**
 * *add_dnodeint - Adds node to the beginning of the dlistint_t list
 * **@head: double pointr
 * @n: node with data to add to the beginning dlistint_t list
 * Return: Null if failed, new address if success.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newbie;

	newbie = malloc(sizeof(dlistint_t));
	if (!newbie)
	{
		return (NULL);
	}
	newbie->n = n;
	newbie->next = *head;
	newbie->prev = NULL;
	if (*head)
	(*head)->prev = newbie;
	
	*head = newbie;

	return (newbie);
}
