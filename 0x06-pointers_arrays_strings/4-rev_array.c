#include "holberton.h"
/**
 * reverse_array - main function
 * @a: integer of function
 * @n: integer of function
 */
void reverse_array(int *a, int n)
{
int z, temp;

n = n--;
z = 0;

while (z < n)
{
temp = a[z];
a[z] = a[n];
a[n] = temp;
z++;
n--;
}
}
