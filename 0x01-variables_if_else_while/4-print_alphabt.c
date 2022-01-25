#include <stdio.h>
/**
 *main - this is a putchar script
 *Return: zero
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
putchar(a);
}
putchar('\n');
return (0);
}
