#include "main.h"
/**
 * _strcat - concatonates as the main function
 * @src: the source of the destination
 * @dest: the destination.
 * Return: concatonates source and destination
 */
char *_strcat(char *dest, char *src)
{
int x, y;

x = 0;
while (dest[x] != 0)
{
x++;
}
y = 0;
while (src[y] != 0)
{
dest[x + y] = src[y];
y++;
}
return (dest);
}
