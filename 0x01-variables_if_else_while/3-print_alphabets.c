#include <stdio.h>
/**
 *main - this is a putchar script
 *Return: zero
 */
int main(void)
{
char ch = 1;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
