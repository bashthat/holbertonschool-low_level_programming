#include "lists.h"
/**
 * free_list - free lits
 * @head: pointer
 * Return: just in time
 */
void free_list(list_t *head)
{
if (head == NULL)
return;
if (head->next != NULL)
free_list(head->next);
free(head->str);
free(head);
}
