#include <stdio.h>
/**
 *main - this is a printf 0-9 script
 *Return: zero
 */
int main(void)
{
int a;
for (a = 'z'; a >= 'a'; --a)
putchar(a);
putchar('\n');
return (0);
}
