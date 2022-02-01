#include "main.h"
/**
 * _isdigit(int c);
 * @c returns 1 if digit, returns 0 if otherwise. compiled..
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	       return (1);
	else
		return (0);
}	
