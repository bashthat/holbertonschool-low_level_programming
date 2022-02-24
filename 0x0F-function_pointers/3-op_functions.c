#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function adds two integers
 * @a: int
 * @b: int
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function subracts
 * @a: int
 * @b: int
 * Return: a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplies
 * @a: int
 * @b: int
 * Return: the sum
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function divides
 * @a: int
 * @b: int
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function give remainder
 * @a: int
 * @b: int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
