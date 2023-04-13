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

	if (size == 0 || nmemb == 0)
		return (0);
	p = malloc(nmemb);
	if (!p)
		return (0);
	*(p + nmemb) = '\0';
	return (p);
}
