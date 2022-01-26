#include <stdio.h>
/**
 *main - this is a printf 0-9 script
 *Return: zero
 */
int main(void)
{
int a;
for (a = '0'; a < '1'; a++)
{
putchar(a);
putchar(',');
}
putchar('\n');
return (0);
}
