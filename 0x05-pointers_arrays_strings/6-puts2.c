#include "main.h"
/**
 * puts2 - prototype to the main function
 * @str: points to the string to print
 * Description - writing a riddled s_r_p_!
 */
void puts2(char *str)
{
int x;
while (str[x])
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
x++;
}
_putchar('\n');
}

