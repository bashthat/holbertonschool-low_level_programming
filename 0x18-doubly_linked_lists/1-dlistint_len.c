#include "lists.h"

/**
 * dlistint_len - Function that returns dlistint_t list
 * @h: list
 * Return: nodez
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodez = 0;

	for (; h; nodez++)
	{
		if (!h->n)
		{
		h = h->next;
		nodez++;
		}
		h = h->next;
	}
	return (nodez);
}
