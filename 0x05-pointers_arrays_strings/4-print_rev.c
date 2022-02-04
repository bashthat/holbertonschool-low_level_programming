#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: character for the string
 * Return: always zero (x).
 */
void print_rev(char *s)
{
int x = 0;

while (*(s + x))
x++;
x = x - 1;
while (x >= 0)

{
_putchar(*(s + x));
x--;
}
_putchar('\n');
}
