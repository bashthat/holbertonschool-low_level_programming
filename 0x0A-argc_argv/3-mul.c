#include "main.h"
#include <stdlib.h>
/**
 * main - prints the name of the program.
 * @argc: number of arguments
 * @argv: pointer to array of args passed
 * Return: always zero
 */
int main(int argc, char **argv)
{
int x, y;

y = 0;
if (argc != 3)
{
printf("%s\n", "Error");
y = 1;
}
else
{
x = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", x);
}
return (0);
}
