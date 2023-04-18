#ifndef dog_h
#define dog_h
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
};
/**
 * dog_t - Define a new type for dog.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
