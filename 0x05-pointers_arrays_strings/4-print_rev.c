#include "main.h"
/**
 * @s: string
 * print_rev: prints string in reverse
 * Return: always zero (x).
 */
void print_rev(char *s)
{
int x = 0;

while (s[x] != 0)
x++;
x--;
while (x >= 0)
x--;
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
