#include "dog.h"
#include <stdio.h>
/*
 * init_dog - Printa struct dog
 * @d: Type of dog
 * Retunr: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name : (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age : (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner : (nil)\n");
	}
}
