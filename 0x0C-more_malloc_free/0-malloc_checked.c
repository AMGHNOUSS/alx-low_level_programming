#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: Integer
 * Return: Nothings
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
