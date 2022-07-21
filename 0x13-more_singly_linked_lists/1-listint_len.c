#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns num of nodez
 * @h: pointer to lists int
 * Return: Nodez
 */
size_t listint_len(const listint_t *h)
{

	const listint_t *t;
	unsigned int counter = 0;
t = h;
	while (t)
	{
		counter++;
		t = t->next;
	}
	return (counter);
}
