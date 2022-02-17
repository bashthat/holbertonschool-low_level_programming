#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to allocation
 * @str: char
 * Return: always zero
 */
char *_strdup(char *str)
{
unsigned int x, y;
char *z;

if (str == NULL)
{
return (0);
}
y = 0;
while (str[y] != '\0')
{
y++;
}
z = malloc(sizeof(char) * y++);
if (z == NULL)
{
return (0);
}
else
{
x = 0;
while (str[x] != '\0')
{
z[x] = str[x];
x++;
}
z[x] = '\0';
return (z);
}
}
