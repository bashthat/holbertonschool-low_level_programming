#include "lists.h"

/**
 * list_len - length of list
 * @h: pointer
 * Return: list
 */

size_t listint_len(const listint_t *h)
{
	size_t x;

	if (h == NULL)
		return (0);
	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
