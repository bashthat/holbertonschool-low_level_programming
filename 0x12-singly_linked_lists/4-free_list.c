#include "lists.h"
/**
 * free_lits - free lits
 * head: pointer
 * Return: just in time
 */
void free_list(list_t *head)
{
while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}
