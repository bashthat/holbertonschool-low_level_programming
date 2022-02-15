#include "main.h"
/**
 * _strspn - substring length
 * @s: segment
 * @accept: string of bytes to compare
 * Return: bytes to segment.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
j++;
if (accept[j] == '\0')
return (i);
i++;
}
return (i);
}
