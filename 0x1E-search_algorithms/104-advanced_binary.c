#include "search_algos.h"

/**
 *advanced_binary - searches for a value in a sorted array of integers
 *@array: points to the first element of the array
 *@size: number of elements in array
 *@value: value to search
 *Return: index where value is located
 **/
int advanced_binary(int *array, size_t size, int value)
{
	size_t xyz = 0;
	size_t i = 0;
	int zyx = 0;
	int index;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (xyz = 0; xyz < size; xyz++)
	{
		printf("%d", array[xyz]);
		if (xyz < size - 1)
			printf(", ");
	}

	i = (size - 1) / 2;
	if (array[i] == value && array[i - 1] != value)
	{
		printf("\n");
		return (i);
	}

	if (array[i] >= value)
	{
		printf("\n");
		return (advanced_binary(array, i + 1, value));
	}

	if (array[i] < value)
	{
		printf("\n");
		zyx = advanced_binary(array + i + 1, size - i - 1, value);
		if (zyx == -1)
			return (-1);
		index = zyx + i + 1;
		return (index);
	}

	return (-1);
}
