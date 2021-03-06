#include <stdio.h>
#include "lists.h"

/**
 * list_len- find a size of linked list
 * @h: list_t linked list
 * Return: size_t length of the *h linked list
 */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	if (!h->next)
		return (1);

	return (1 + list_len(h->next));
}
