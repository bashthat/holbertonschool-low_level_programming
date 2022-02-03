#include "main.h"
/**
 * print_array - prototype to the main function
 * @a: integer
 * @n: number of elements of array
 * Description - writing a riddled [4] 's','c','r','i','p','t'
 */
void print_array(int *a, int n)
{
int z;

for
(z = 0; z < n; z++);
{
printf("%d", a[z]);
if (z < n - 1)
{
printf(", ");
}
}
printf("\n");
}
