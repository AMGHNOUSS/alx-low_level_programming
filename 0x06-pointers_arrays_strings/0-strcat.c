#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int cpm = sizeof(dest), i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + cpm + i) = *(src + i);
		i++;
	}
	return (dest);
}
