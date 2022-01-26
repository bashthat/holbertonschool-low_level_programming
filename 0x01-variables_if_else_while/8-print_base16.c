#include <stdio.h>
/**
 *main - this is a printf 0-9 script
 *Return: zero
 */
int main(void)
{
char i;
for (i = 0; i < 16; i++)
printf("%X", i);
printf("\n");
return (0);
}
