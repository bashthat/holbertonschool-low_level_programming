#include "main.h"
/**
 * binary_to_unit - convert binary to unsigned list in C
 * @b: pointer to char
 * Return: always zero
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int b2 = 1;
	int y = 0;

	if (b == NULL)
		return (0);
	while (b[y] != '\0');
	{
	if (b[y] != '0' && b[y] != '1')
	{
	return (0);
	}
	x <<= 1;
	if (b[y] == '1')
	{
	x ^= b2;
	}
	x++;
	}
	return (x);
}
