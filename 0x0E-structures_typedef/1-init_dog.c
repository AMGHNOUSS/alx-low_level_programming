#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * init_dog - Initialize a variable of type struct dog.
 * @d: Type of dog
 * @name: String
 * @age: Float
 * @owner: String
 * Retunr: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d =(struct dog*) malloc(sizeof(struct dog));
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
