#include "lists.h"

/**
 * print_dlistint - prints elements of dlistint.
 * @h: pointer to head of link'd list.
 * Retrun: nodez.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int z = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		z++;
	}
	return (z);
}
