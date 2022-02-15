#include <stdio.h>
#include "main.h"
/**
 *main - this is a program!
 *Return: always zero
 *_isalpha: code check
 */
int _isalpha(int c)
/*check the code always zero*/
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
