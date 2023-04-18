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
	int i, len1 = 0, len2 = 0;

	d = malloc(sizeof(dog_t));
	if (!d || !(name) || !(owner))
	{
		free(d);
		return (0);
	}
	while (*(name + len1))
		len1++;
	while (*(owner + len2))
		len2++;
	d->name = malloc(len1 + 1);
	d->owner = malloc(len2 + 1);
	if (!(d->name) || !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (0);
	}
	for (i = 0; i < len1; i++)
		(*d).name[i] = name[i];
	(*d).name[i] = '\0';
	for (i = 0; i < len2; i++)
		(*d).owner[i] = owner[i];
	(*d).owner[i] = '\0';
	d->age = age;
	return (d);
}
