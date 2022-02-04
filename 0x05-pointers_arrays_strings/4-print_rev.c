#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: character for the string
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
