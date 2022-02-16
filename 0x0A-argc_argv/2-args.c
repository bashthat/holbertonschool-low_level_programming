#include "main.h"
/**
 * main - prints the name of the program.
 * @argc: number of arguments
 * @argv: pointer to array of args passed
 * Return: always zero
 */
int main(int argc, char *argv[])
{
int z;
if (argc > 0)
{
for (z = 0; z < argc; z++)
{
printf("%s\n", argv[z]);
}
}
return (0);
}
