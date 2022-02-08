#include "holberton.h"
/**
 * _strncat - the main function
 * @src: string to be copied
 * @dest: destination
 * @n: the integer
 * Return: always zero
 */
char *_strncat(char *dest, char *src, int n)

{
int y, z, star;

star = _strlen(dest);
y = star;
z = 0;
while (z < n && src[z] != 0)
{
dest[y] = src[z];
y++;
z++;
}
return (dest);
}
