#include "main.h"
/**
 * puts_half - prototype to the main function
 * @str: points to the string to print
 * Description - writing a riddled s..pt!
 */
void puts_half(char *str)
{

int x;
int y;

while (str[x])
{
x++;
}

if (x % 2 == 1)
{
y = (x - 1) / 2;
y = x - y;
}

else
{
y = x / 2;
}

for (; str[y]; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
