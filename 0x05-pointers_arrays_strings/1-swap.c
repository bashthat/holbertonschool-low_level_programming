#include "main.h"
/**
 * swap_int - function to swap values of int
 * @e: Pointer
 * @d: Pointer
 */
void swap_int(int *e, int *d)
{
	int tmp;

	tmp = *e;
	*e = *d;
	*d = tmp;
}
