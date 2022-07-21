#include "lists.h"
#include <stdlib.h>
/**
 * free_list- free all malloc previous
 * @head: linked list
 */

void free_list(list_t *head)
{
	list_t *synth;

	while (head)
	{
		synth = head;
		head = head->next;
		free(synth->str);
		free(synth);
}
}
