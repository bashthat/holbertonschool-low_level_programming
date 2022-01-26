#include <stdio.h>
/**
 *main - this is a printf 0-9 script
 *Return: zero
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a % 10 + '0');
if (a != 9)
{
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
