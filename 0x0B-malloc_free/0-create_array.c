#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of chars.
 * @size: Integer
 * @c: char
 * Return: null if size = 0 or String
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	p = malloc(size * sizeof(char));
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
