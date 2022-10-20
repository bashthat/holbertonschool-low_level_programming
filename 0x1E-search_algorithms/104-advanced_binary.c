#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: points to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: index where value is located
**/
int advanced_binary(int *array, size_t size, int value)
{
    size_t i, mid = size / 2;

    if (array == NULL)
        return (-1);
    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("Finding the elements");
    if (size == 1 && array[0] != value)
        return (-1);
    if (array[mid] >= value)
        return (advanced_binary(array, mid + 1, value));
    else
        return (advanced_binary(array + mid + 1, size - mid - 1, value) + mid + 1);
}