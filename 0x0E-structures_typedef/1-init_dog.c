#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: dog
 * @name: the name of the dog
 * @age: age of dog
 * @owner: the owner
 * Description: this makes a new dog struct
 * Retrun: is void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
