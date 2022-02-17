#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatonates as a function
 * @s1: char one
 * @s2: char two
 * Return: rutruns pointer or null
 */
char *str_concat(char *s1, char *s2)
{
char *cat;
int x, y, z;

x = 0;
y = 0;
z = 0;
if (s1 != NULL)
{
	while (s1[x])
	{
	x++;
	}
}
if (s2 != NULL)
{
	while (s2[y])
	{
	y++;
	}
}
cat = malloc((x + y + 1) * sizeof(char));
if (cat == NULL)
{
	return (NULL);
}

while (z < x)
{
	cat[z] = s1[z];
	z++;
}
while (z < x + y)
{
cat[z] = s2[z - x];
z++;
}
cat[z + 1] = '\0';
return (cat);
}
