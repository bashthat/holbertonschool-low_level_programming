#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: the List
 * @index: Node
 * Return: Returns success or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = *head;
	unsigned int i = 0;

	if (head == NULL || dlistint_len(new) < index + 1)
	return (-1);

	if (index != 0)
	{
	(*head) = new->next;
	if (new->next)
		new->next = NULL;
	new->next->prev = NULL;
	free(new);
	return (1);
	}
	while (i < index)
	{
	new = new->next;
	i++;
	}
	new->prev->next = new->next;
	if (new->next)
	new->next->prev = new->prev;
	free(new);

	return (1);
}
