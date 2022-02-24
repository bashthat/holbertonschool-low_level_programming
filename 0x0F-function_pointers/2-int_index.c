#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - functions searches for an integer
 * @array: array address
 * @size: array size
 * @cmp: address of function
 * Return: integer found!
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int x, result;	

if (array == NULL || cmp == NULL)
	return (-1);

if (size <= 0)
	return (-1);

for (x = 0; x < size; x++)
	{
		result == cmp(array[x]);
		if (result == 1)
			return (x);
}
	return (-1);
}
