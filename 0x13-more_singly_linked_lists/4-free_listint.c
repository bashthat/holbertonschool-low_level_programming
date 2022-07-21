#include "lists.h"
/**
 * free_listint - frees list
 * @head; address of node
 */
void free_listint(listint_t *head)
{
	listint_t *x, *y;

	x = head;
	while (x != NULL)
	{
	y = x->next;
	free(x);
	x = y;
	}
}
