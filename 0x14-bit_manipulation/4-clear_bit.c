#include "main.h"
/**
 * clear_bit - clears bits as a function
 * @n: unsigned long int
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned long int check = 1;
unsigned int size = sizeof(n) * 8;	

if (*n == '\0')
	return (-1);
if (index > size)
	return (-1);
check <<= index;
*n &= ~check;
	return (1);
}
