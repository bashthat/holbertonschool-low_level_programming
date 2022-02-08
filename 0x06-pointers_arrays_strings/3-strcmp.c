#include "holberton.h"
/**
 * _strcmp - main function to compare strings (s1, s2)
 * @s1: first string
 * @s2: second string
 * Return: returns to destination
 */
int _strcmp(char *s1, char *s2)
{
int x;

x = 0;

while (s1[x] != '\0' && s2[x] != '\0')
{
if (s1[x] != s2[x])
{
return (s1[x] - s2[x]);
}
x++;
}
return (0);
}
