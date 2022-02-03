#include "main.h"
/**
 * rev_string - reverses a string
 *@s: points to the string to print
 * Description: this prototyped reverses the string expressed.
 */
void rev_string(char *s)
{
int x = 0;
int y = 0;
int z = 0;

while (s[y])
{
y++;
}

y--;

while (x < y + 1 / 2)
{

z = s[x];
s[x] = s[y];
s[y] = z;

y--;
x++;
}
}
