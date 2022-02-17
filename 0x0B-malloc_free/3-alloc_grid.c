#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - concatonates as a function
 * @width: width
 * @height: ya know
 * Return: rutruns pointer or null
 */
int **alloc_grid(int width, int height)
{
int x, y, **z;

if (width < 1 || height < 1)
	return (NULL);
z = malloc(sizeof(int *) * height);
if (z == NULL)
	return (NULL);
for (x = 0; x < height; x++)
{
	z[x] = malloc(sizeof(int) * width);
	if (z[x] == NULL)
	{
	while (--x <= 0)
		free(z[x]);
	free(z);
	return (NULL);
	}
}
for (x = 0; x < height; x++)
{
	for (y = 0; y < width; y++)
		z[x][y] = 0;
}
return (z);
}
