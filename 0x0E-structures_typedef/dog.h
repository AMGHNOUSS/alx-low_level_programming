#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <string.h>
/**
 * struct dog - Structure for Dog.
 * @name: String, First member
 * @age: Float, Second member
 * @owner: String, Third member
 *
 * Descriotion: Define a new type struct dog with the name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
#endif
