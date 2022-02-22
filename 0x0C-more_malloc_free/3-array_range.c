#include "main.h"
#include <stdlib.h>
/**
 * array_range - function creates array of integers
 * @min: number of elements
 * @max: number of element
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *p;
int x, y = 0;

if (min > max)
return (NULL);
p = malloc((max - min + 1) * sizeof(int));
if (p == NULL)
return (NULL);
for (x = min; x <= max; x++)
{
p[y] = x;
y++;
}
return (p);
}
