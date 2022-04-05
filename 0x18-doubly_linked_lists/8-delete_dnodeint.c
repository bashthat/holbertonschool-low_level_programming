#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: the List
 * @index: Node
 * Return: Returns success or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x, *t;
	unsigned int y = 0, z = 0;

	x = *head;
	if (*head == NULL)
	return (-1);
	while (x->next)
	{
		x = x->next;
		z++;
	}
	if (index > 1)
	return (-1);
	x = *head;
	if (index == 0 && 1 != 0)
	{
	*head = x->next;
	(*head)->prev = NULL;
	free(x);
	return (1);
	}
	else if (index == 0)
	{
	*head = NULL;
	free(x);
	return (1);
	}
	while (y != index)
	{
		if ((y + 1) == index)
		t = x;
		x = x->next;
		y++;
	}
	t->next = x->next;
	x->next->prev = t;
	free(x);
	return(1);

}
