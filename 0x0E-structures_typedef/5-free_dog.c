#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free dog.
 * @d : Type of d
 * Return: Nothings.
 */
void free_dog(dog_t *d)
{

	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
