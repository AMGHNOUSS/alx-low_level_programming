#include <stdio.h>
#include "dog.h"
/**
 * print_dog- Print struct dog.
 * @d: Type of dog
 * Retunr: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == 0)
			printf("Name : (nil)\n");
		else
			printf("Name: %s\n" (*d).name);
		if ((*d).age < 0)
			printf("Age : (nil)\n");
		else
			printf("Age: %f\n", (*d).age);
		if ((*d).owner == 0)
			printf("Owner : (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
	else
		return;
}
