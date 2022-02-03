#include "main.h"
/**
 *@s: string
 * print_rev: prints string in reverse
 * Return: always zero (x).
 */
void print_rev(char *s)
{
int x;

while (s[x] != '\0')
{
x++;
}
x--;
for (x = x; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
