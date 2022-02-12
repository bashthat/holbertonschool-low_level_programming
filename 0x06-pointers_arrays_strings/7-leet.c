#include "holberton.h"
/**
 * leet - the function of main
 * 
 * Return: always zero
 */
char *leet(char *v)
{
int x, y;
char m7[] = "AEOTL";
char m6[] = "aeotl";
char m5[] = "43071";

for (x = 0; v[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
	if (v[x] == m7[y])
	{
	v[x] = m5[y];
	}
}
	return (0);
}
}
