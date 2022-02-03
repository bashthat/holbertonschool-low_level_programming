#include "main.h"
/**
 *@s: string
 * print_rev: prints string in reverse
 * Return: always zero (x).
 */
void print_rev(char *s)
{
int x;

for (x = 0; *s != '\0'; s++)
x++;
s--;
for (x--; x >= 0; s--)
_putchar(*s);
_putchar('\n');
}
