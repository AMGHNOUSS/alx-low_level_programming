#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int cpm = 0, i = 0;

	while (*(dest + cpm) != '\0')
		cpm++;
	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + cpm + i) = *(src + i);
	return (dest);
}
