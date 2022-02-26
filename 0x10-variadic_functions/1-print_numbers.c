#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - printing numbers
 * @n: int constant
 * @seperator: seperator of the numbers printed in the function
 * Return: SUCCESS! in the stdlib.h header. othewise null or void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;

	va_list numbers;

	va_start(numbers, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator && y < (n -1))
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	
	printf("\n");
}
