#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* this is a betty styled this format in c coding */
/**
 *main - this is a RAND_MAX and rand script
 *Return: zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
{
if (n > 0)
{
printf("if the number is greater than 0: %d is positive\n", n);
}
else if (n == 0)
{
printf("if the number is 0: %d is zero\n", n);
}
else
{
printf("if the number is less than 0: %d is negative\n", n);
}
}
(n++);
return (0);
}
