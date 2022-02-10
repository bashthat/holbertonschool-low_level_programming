#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: char
 * Return: zero is always the hero (success!)
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
