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
    size_t xyz = 0;
    size_t i = 0;
    int zyx = 0;
    int index = 0;

    if (array == NULL)
        return (-1);
    if (size == 1 && array[0] != value)
        return (-1);
    xyz = size / 2;
    if (array[xyz] == value)
    {
        if (array[xyz - 1] == value)
        {
            for (i = xyz; i > 0; i--)
            {
                if (array[i] != value)
                    return (i + 1);
            }
        }
        return (xyz);
    }
    if (array[xyz] > value)
    {
        printf("Searching in array: ");
        for (i = 0; i < xyz; i++)
        {
            printf("%d, ", array[i]);
        }
        printf("Found %d at index: %d\n", array[xyz], (int)xyz);
        zyx = advanced_binary(array, xyz, value);
        if (zyx == -1)
            return (-1);
        index = zyx;
    }
    else
    {
        printf("Searching in array: ");
        for (i = xyz; i < size; i++)
        {
            printf("%d, ", array[i]);
        }
        printf("Found %d at index: %d\n", array[xyz], (int)xyz);
        zyx = advanced_binary(array + xyz, size - xyz, value);
        if (zyx == -1)
            return (-1);
        index = zyx + xyz;
    }
    return (index);
}