#include "lists.h"
#include <string.h>
/**
 * add_node: adds node.
 * @head: pointer of strct
 * @str: *string
 * Return: address of string
 */
list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int len;

	list_t *new

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = d;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
