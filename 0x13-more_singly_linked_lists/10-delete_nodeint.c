#include "lists.h"
/**
 * delete_nodeint_at_index - delete node int at index
 * @head: first node
 * @index: position of node
 * Return: success!
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *c, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	c = *head;
	for (x = 0; x < index -1; x++)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
	}
	next = c->next;
	c->next = next->next;
	free(next);
	return (1);
}
