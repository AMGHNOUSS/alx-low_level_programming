#include "main.h"
/**
 * _strncpy - Copie a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cmp = 0, i = 0;

	while (*(src + cmp) != '\0')
		cmp++;
	for (i = 0; i < n; i++)
	{
		if (i < cmp)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	return (dest);
}
