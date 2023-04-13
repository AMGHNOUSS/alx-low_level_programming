#include <stdlib.h>
/**
 * _calloc - concatenate two strings.
 * @size: Integer
 * @nmemb: Integer
 * Return: Nothings
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;
	return (p);
}
