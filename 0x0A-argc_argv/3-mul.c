#include "main.h"
#include <stdlib.h>
/**
 * main - prints the name of the program.
 * @argc: number of arguments
 * @argv: pointer to array of args passed
 * Return: always zero
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
