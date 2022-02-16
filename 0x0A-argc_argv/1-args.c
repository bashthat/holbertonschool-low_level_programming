#include "main.h"
/**
 * main - prints the name of the program.
 * argc: number of arguments
 * argv: pointer to array of args passed
 * Return: always zero
 */
int main (int argc, char **argv)
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
