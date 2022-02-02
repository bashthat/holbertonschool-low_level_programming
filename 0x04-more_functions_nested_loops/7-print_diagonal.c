#include "main.h"
/**
 * print_diagonal - prints a diagonal expression by design
 * @n: integer of truth
 * Return: multiples of a and b.
 */
void print_diagonal(int n)
{
int s;
int a;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (s = 0; s <= a; s++)
{
if (s != 1)
_putchar('$');
if (s == a)
{
_putchar('\\');
_putchar('\n');
}
}
}
}
else
{
_putchar('\n');
}
}
