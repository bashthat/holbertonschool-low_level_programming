#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: node
 * @idx: index
 * @n: data of the node
 * Return: success.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next;
	listint_t *prev;
	listint_t *new;
	unsigned int x;

	if (head == NULL)
	return (NULL);
	next = *head;
	prev = NULL;
	for (x = 0; x < idx; x += 1)
	{
	if (next == NULL)
		return (NULL);
	prev = next;
	next = next->next;
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next;
		if (idx == 0)
		*head = new;
		else
			prev->next = new;

	return (new);
}
