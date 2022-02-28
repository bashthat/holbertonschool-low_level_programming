#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - main function
 * @n: const int
 * @separator: separates
 * Return: always void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int y = 0;
char *str;

va_list argc;
va_start(argc, n);

while (y < n)
{
str = va_arg(argc, char*);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (y < (n - 1) && separator)
	printf("%s", separator);

	y++;
}
printf("\n");

va_end(argc);
}
