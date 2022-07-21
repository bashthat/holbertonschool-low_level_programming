#include "lists.h"
/**
 * free_listint2 - freelist
 * @head: head node.
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
	x = (*head)->next;
	free(*head);
	*head = x;
	}
}
