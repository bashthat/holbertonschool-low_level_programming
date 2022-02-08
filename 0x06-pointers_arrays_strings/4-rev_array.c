#include "holberton.h"
/**
 * reverse_array - main function
 * @a: integer of function
 * @n: integer of function
 */
void reverse_array(int *a, int n)
{
int z;
int temp;

for (z = 0; z < n--; z++)
{
temp = a[z];
a[z] = a[n];
a[n] = temp;
}
}
