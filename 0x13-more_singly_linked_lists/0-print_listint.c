#include "lists.h"

/**
 * print_listint - prints all elemnts of the list given to the function
 * @h: type of n-struct
 * Return: the node count.
 */

size_t print_listint(const listint_t *h)
{
unsigned int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
