#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int cpm = 0, i = 0;

	while (*(dest + cpm) != '\0')
		cpm++;
	for (i = 0; *(src + i) != '\0' && i < n; i++)
		*(dest + cpm + i) = *(src + i);
	return (dest);
}
