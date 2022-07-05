#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - this a a variadic c function that recieves forat
 * @format: points to chars to print
 */

void print_all(const char * const format, ...)
{
	va_list(args);
	char *str_value;
	int i = 0;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			break;
			case 's':
			str_value = va_arg(args, char*);
			printf("%s", str_value ? str_value : "(nil)");
			break;
			default:
			i++;
			continue;
			break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
