#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/*
* init_dog - Initializes a variable of type struct dog.
* @d: Pointer to the name to assign.
* @age: age to assing.
* @owner: pointer to the owner's name to assing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
