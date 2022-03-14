#include "lists.h"

/**
 * list_len - length of list
 * @h: pointer
 * Return: list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
