#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/*
* init_dog - Initializes a variable of type struct dog.
* @d: Pointer to the name to assign.
* @age: age to assing.
* @owner: pointer to the owner's name to assing.
*@name: name to assign to the dog.
*
*Description: this function takes a pointer to a struct dog and
* initializes its fields with the provided values. If the pointer is NULL,
* the function does nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
