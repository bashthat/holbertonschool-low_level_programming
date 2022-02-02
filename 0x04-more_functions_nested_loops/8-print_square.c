#include "main.h"
/**
 * print_square - draws a square creatively using putchar and pound signs.
 * @n: the integer which initiates # in the function.
 */
void print_square(int n)
{
int s, q;

if (n > 0)
{
for (s = 0; s < n; s++)
{
for (q = 0; q < n; q++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('n');
}
