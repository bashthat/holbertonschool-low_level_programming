#include "lists.h"

/**
 * add_node: adds node.
 * @head: pointer of strct
 * @str: *string
 * Return: address of string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int counter = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	
	while (str[counter] != '/0')
	{
		counter++;
	}
	tmp->len = counter;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
