#include "main.h"
/**
 * print_diagsums - prints the sum of two matrix
 * @a: pointer
 * @size: added diagonal
 */
void print_diagsums(int *a, int size)
{
int x, y, z;

y = z = 0;
for (x = 0; x < (size * size); x += size + 1)
y += a[x];
for (x = size - 1; x < (size * size - 1); x += size - 1)
z += a[x];
printf("%d, %d\n", y, z);
}
