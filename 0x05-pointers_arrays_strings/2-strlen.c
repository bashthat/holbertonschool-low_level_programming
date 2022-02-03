#include "main.h"
/**
 * this function prints a string followed by a new line.
 * _strlen: returns the length of a string
 * @s: Pointer to string
 * Return: always zero (x).
 */
int _strlen(char *s)
{
int x = 0;

for
(x = 0; *s != '\0'; s++);
{
x++;
}
return (x);
}
