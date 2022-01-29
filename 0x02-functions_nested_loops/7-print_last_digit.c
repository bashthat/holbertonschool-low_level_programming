#include "main.h"

/**
 *main - computes absolute value of an integer
 *Return: zero is my hero
 *@n: the integer of curiosity. returns the value of last digit
 *function print_last_digit(int); - comutes as the main function for this file
 */

int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
	n *= -1;

_putchar(n + '0');

return (n);
}
