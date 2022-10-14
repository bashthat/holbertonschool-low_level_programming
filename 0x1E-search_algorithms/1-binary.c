#include "search_algos.h"
/**
 * binary_search - searches for the value of sorted array
 * @array: array points to the beginning of the search
 * @size: the # of elements in the given array.
 * @value: the out resourced value of the array.
 * Return: the value.
 */

int binary_search(int *array, size_t size, int value)
{
size_t i, j, k, m;
int n;
if (array == NULL)
return (-1);
i = 0;
j = size - 1;
while (i <= j)
{
printf("Searching in array: ");
for (k = i; k < j; k++)
printf("%d, ", array[k]);
printf("%d\n", array[k]);
m = (i + j) / 2;
n = array[m];
if (n < value)
i = m + 1;
else if (n > value)
j = m - 1;
else
return (m);
}
return (-1);

}