#include "main.h"

/**
 * print - prints + or - depending on the number.
 * main - function to print values + or - depending on the function and zero
 * Return: one or zero for the machine code hero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
