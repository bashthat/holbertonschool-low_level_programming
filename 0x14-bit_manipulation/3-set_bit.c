#include "main.h"
/**
 * set_bit - set bit
 * @n: number given
 * @index: unsigned int
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
	return (1);
	}
	return (-1);
}
