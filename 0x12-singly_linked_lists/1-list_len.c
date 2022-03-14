#include "lists.h"

/**
 * list_len - length of list
 * Return: list
 */

size_t list_len(const listint_t *h)
{
	const listint_t *tmp = NULL;
	unsigned int x = 0;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		x++;
	}
	return (x);
}
