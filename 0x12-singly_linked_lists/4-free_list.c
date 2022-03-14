#include "lists.h"
/**
 * free_list - free list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *xyz;

	while (head)
	{
		xyz = head;
		head = head->next;
		free(xyz->str);
		free(xyz);
	}
}
