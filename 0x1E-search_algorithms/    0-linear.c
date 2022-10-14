#include "search_algos.h"
/**
 * linear_search - searches for a value in an array 
 * @array: pointer to search through the array starting with element 1. 
 * @size: number of elements to the given array
 * @value: the value the array is searching for
 * Return: the indexed value.
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}