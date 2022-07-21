#include "main.h"

/**
 * flip_bits - returns number of bits as a function
 * @n: unsigned long int
 * @m: other long int
 * Return: count a set of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, count = 0;

	d = n ^ m;
	while (d)
	{
	if (d & 1)
	count++;
	d >>= 1;
	}
	return (count);
}
