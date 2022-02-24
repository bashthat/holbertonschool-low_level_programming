#include "function_pointers.h"
/**
 * print_name - prints name of %s
 * @name: name to be printed
 * @f: callback
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}
