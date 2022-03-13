#include "main.h"
/**
 * binary_to_unit - convert binary to unsigned list in C
 * @b: pointer to char
 * Return: always zero
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	unsigned int base = 1;
	int y = 0;

	if (b == NULL)
		return (0);
	for (; b[y]; y++)
		if (b[y] != '0' && b[y] != '1')
		return (0);

	for (y = y - 1; y >= 0; y--)
	{
		if (b[y] == '1')
		d += base;
		base *= 2;
	}
	return (d);
}
