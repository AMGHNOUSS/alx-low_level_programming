#include <stdlib.h>
/**
 * _memcpy - copy string
 * @destination: char
 * @source: Char
 * @n:Integer
 * Return: string
 */
void *_memcpy(void *destination, const void *source, unsigned int n)
{
	char *dst = (char *)destination;
	const char *src = (const char *)source;
	unsigned int i;

	for (i = 0; i < n; i++)
		dst[
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @new_size: Integer
 * @old_size: Integer
 * @ptr: Void pointer
 * Return: Tab of POintr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (ptr == 0)
	{
	p = malloc(new_size);
		free(ptr);
		return (p);
	}
	free(ptr);
	return (ptr);
}
