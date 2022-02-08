#include "holberton.h"
/**
 * leet - the function of main
 * 
 * Return: always zero
 */
char *leet(char *z)
{
int x, y;
char m7[] = "aAeEoOtTlL";
char m5[] = "4433007711";

for (x = 0; z[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
	if (z[x] == m7[y])
	{
	z[x] = m5[y];
	}
}
	return (0);
}
}
