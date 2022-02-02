#include "main.h"
/**
 * print_most_numbers - print 0-9 except 2 and 4.
 * Return: to zero
 */
void print_most_numbers(void)
{
int x = 0;

while (x <= 9)
{
if (x != 2 && x != 4)
_putchar(x + '0');
x++;
}
_putchar('\n');
}
