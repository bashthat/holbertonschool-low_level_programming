#include "main.h"
/**
 * square_up - sizing the problem
 * @z: integer
 * @n: shared integer
 * Return: sqrt
 */
int square_up(int z, int n)
{
if (z * z == n)
return (z);
else if (z > n / 2)
return (-1);
else
return (square_up(z + 1, n));
}

/**
 * _sqrt_recursion - square int
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
return (square_up(1, n));
}
