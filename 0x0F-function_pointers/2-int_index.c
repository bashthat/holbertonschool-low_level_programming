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

	int x = 0;
	int result = 0;

if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (x = 0; x < size; x++)
	{
		result == cmp(*(array + x));
		if (result != 0)
			return (x);
}
	return (-1);
}
