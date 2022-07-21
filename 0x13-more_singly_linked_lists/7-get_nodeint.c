#include "lists.h"
/**
 * get_nodeint_at_index - get nodeint at index
 * @head: node
 * @index: position of node
 * Return: address of the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		return (NULL);
	}
	return (head);
}
