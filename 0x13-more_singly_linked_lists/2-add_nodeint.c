#include "lists.h"

/**
 * listint_len - list num of ints
 * @n: int
 * @head: pointer to head node
 * Return: int
 * add_nodeint - node int
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;
x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;
	return (*head);
}
