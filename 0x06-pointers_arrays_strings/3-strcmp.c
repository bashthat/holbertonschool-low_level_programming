#include "holberton.h"
/**
 * _strcmp - main function to compare strings (s1, s2)
 * @s1: first string
 * @s2: second string 
 * Return: returns to destination
 */
int *_strcmp(char *s1, char *s2)
{
int x, diff;

x = 0;

while (s2[x] != '\0' || s1[x] != '\0')
{
if (s2[x] != s1[x])
{
diff = s1[x] - s2[x];
break;
}
else
{
diff = 0;
}
s1++;
s2++;
}
return (diff);
}
