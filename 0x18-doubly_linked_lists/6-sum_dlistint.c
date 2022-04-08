#include "lists.h"

/**
 * sum_dlistint - the sum returned from dlistint
 * @head: head
 * Return: integers data
 */
int sum_dlistint(dlistint_t *head)
{
	int xyz = 0;

	while (head != NULL)
	{
	xyz = xyz + head->n;
	head = head->next;
	}
	return (xyz);
}
