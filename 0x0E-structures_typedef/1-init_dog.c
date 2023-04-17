#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Type of dog
 * @name: String
 * @age: Float
 * @owner: String
 * Retunr: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
