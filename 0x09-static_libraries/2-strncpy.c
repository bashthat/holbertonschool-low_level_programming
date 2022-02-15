#include "main.h"
/**
 * _strncpy - main function.
 * @dest: destination of the copy
 * @src: source
 * @n: the integer used for function.
 * Return: returns to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

x = 0;
while (src[x] != 0 && x < n)
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
