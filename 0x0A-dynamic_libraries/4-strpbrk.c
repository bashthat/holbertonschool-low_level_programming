#include "main.h"
/**
 * _strpbrk - searches string
 * @accept: array of bytes
 * @s: pointer to string
 * Return: pointer to match bytes in s/accept or null
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i;

while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
