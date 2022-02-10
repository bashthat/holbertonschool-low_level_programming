#include "main.h"
/**
 * _print_rev_recursion - prints reverse string
 * @s: char
 * Return: zero is always the hero (success!)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
