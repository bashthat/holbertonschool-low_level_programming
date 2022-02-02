#include "main.h"
/**
 *print_line - prints line
 * @n: integer to print line
 * Return: multiples of a and b.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
		for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
