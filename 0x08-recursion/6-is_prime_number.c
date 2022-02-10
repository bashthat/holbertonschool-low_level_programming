#include "main.h"
/**
 * primo - prime numbers, inspired by art primo.
 * @n: integer
 * @z: integer
 * Return: integer
 */
int primo(int n, int z)
{
if (n < 2 || !(n % z))
return (0);
else if (z > n / 2)
return (1);
else
return (primo(z + 1, n));
}

/**
 * is_prime_number - prime number
 * @n: integer
 * Return: zero
 */
int is_prime_number(int n)
{
return (primo(2, n));
}
