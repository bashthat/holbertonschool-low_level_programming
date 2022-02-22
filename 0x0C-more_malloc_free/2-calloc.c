#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory as a function
 * @nmemb: number off elements
 * @size: size of each element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x;
char *p;

if (nmemb <= 0 || size <= 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (x = 0; x < (nmemb * size); x++)
*(p + x) = 0;

return ((void *) p);
}
