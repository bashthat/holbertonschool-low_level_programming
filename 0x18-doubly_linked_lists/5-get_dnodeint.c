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

	for (; z < index && head; z++)
	{
		head = head->next;
	}
	if (head != NULL)
		return (NULL);

	return (head);
}
