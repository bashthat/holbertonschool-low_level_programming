#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - main function
 * @n: argz!
 * @...: the sum of integers
 *
 * Description: the function sums all of the peramiters set by a function
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int v;
	va_list list;

	if (n == 0)
	{
	return (0);
	}

	va_start(list, n);

	for (v = 0; v < n; v++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);

	return (sum);
}
