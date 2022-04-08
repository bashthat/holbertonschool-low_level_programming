#include "lists.h"
/**
 * get_dnodeint_at_index - Finds nth node
 * @head: List
 * @index: nth node
 * Return: Returns node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int z = 0;

	dlistint_t *temp = head;

	if (!head)
		return (NULL);

	while (temp != NULL)
	{
		if (z == index)
		return (temp);

	temp = temp->next;
	z++;
	}
	
	return (NULL);
}
