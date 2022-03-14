#include "lists.h"

/**
 * print_list - prints all elementents given in a list
 * @h: pointer to a node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *tmp = NULL;

	tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
		printf("[0] (nil)\n");
		}
	else
		printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
