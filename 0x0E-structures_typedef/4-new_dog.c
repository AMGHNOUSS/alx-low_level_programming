#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog.
 * @name: String
 * @age: float
 * @owner: string
 * Return: Type of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
