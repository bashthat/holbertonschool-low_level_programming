#include "lists.h"

/**
 * list_len - length of list
 * @h: pointer
 * Return: list
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
