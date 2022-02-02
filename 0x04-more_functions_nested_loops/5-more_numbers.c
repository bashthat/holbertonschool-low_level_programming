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

x = z = 0;
while (x < 10)
{
while (z >= 14)
{
if (z >= 10)
_putchar('0' +  z / 10);
_putchar('0' + z % 10);
z++;
}
_putchar('\n');
z = 0;
x++;
}
}
