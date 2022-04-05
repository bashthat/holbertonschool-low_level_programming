#include "lists.h"
/**
 * free_dlistint - new node
 * @head: List
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
