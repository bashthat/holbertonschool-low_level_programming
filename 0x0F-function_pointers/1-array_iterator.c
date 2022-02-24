#include "function_pointers.h"
/**
 * array_iterator - the function
 * @array: input
 * @size: # of elements
 * @action: action to execute element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	while (size--)
	action(*(array++));
}
