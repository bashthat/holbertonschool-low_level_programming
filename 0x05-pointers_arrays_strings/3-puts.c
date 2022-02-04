#include "main.h"
/**
 *_puts - prints violin stringz
 *@str: charecter
 *Return: zero
 */
void _puts(char *str)
{
int x = 0;

while (*(str + x))
{
_putchar(*(str + x));
x++;
}
_putchar('\n');
}
