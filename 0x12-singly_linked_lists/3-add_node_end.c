#include <string.h>
#include "lists.h"
#include <stddef.h>
/**
 * last_node - adds node at end of string
 * @head: points sto NULL
 * @str: stsring
 * Return: length
 */
list_t *last_node(list_t *h)
{
	if (!h)
	return (0);

	if (!h->next)
	return (h);

	return (last_node(h->next));
}
/**
 * add_node_end - this is a function that adds a node at the end of the link list
 * @head: head start
 * @str: string
 * Return: new node at end of list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last;
	int len;

	node = malloc(sizeof(list_t));

	if (!node)
	return (NULL);

	node->str = strdup(str);
	for (len = 0; str[len]; len++)
	{}
	node->len = len;
	node->next = NULL;

	if (!*head)
		*head = node;
}
return (node);
}
