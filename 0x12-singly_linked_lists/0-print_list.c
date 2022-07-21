#include "lists.h"

/**
 * print_list - printing the elements of the lniked print_list list_t
 * @h: defines the struct
 * Return: zero/null
 */

size_t print_list(const list_t *h)
{
int x = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
x++;
}
return (x);
}
