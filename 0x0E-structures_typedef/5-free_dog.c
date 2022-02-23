#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: a pointer to dog struct
 * Description: free!
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;
	free(d->name);
	free(d->owner);
	free(d);
}
