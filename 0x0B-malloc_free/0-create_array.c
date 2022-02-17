#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: integer
 * @c: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	if (size == 0)
	return (0);
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (x = 0; x <= size; x++)
			p[x] = c;
	}
	return (p);
}
