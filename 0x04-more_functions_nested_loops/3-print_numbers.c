#include "main.h"
#include <stdio.h>
/**
 *print_numbers - printst integers 0 through 9r
 *_putchar: prints numbers
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
