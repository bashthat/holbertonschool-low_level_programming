#include "main.h"
/**
 * _memcpy - copies memory
 * @n: integer used for script
 * @src: points to memory
 * @dest: points to dest
 * Return: to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
