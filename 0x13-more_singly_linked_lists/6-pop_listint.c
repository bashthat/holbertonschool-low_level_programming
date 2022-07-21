#include "lists.h"
/**
 * pop_listint - delete first element
 * @head: pointer
 * Return: Always succes stlib function.
 */
int pop_listint(listint_t **head)
{
	listint_t *c;
	int d;

	if (*head == NULL)
		return (0);

	c = *head;
	*head = c->next;
	d = c->n;
	free(c);
	return (d);
}
