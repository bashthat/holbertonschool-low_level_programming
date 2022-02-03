#include "main.h"
#include <stdio.h>
/**
 *more_numbers - numbers 0 through 9 times ten
 *@x: first integer
 *@z: second integer
 *_putchar: prints numbers
 */


void more_numbers(void)
{
int x;
int z;

for (x = 0; x < 10; x++)
{
for (z = 0; z < 15; z++)
{
if (z > 9)
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
_putchar('\n');
}
}
