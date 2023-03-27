#include "main.h"
#include <string.h>
/**
 * *_strcpy -  copies the string pointed to by src.
 * @dest: array
 * @src: lenght of array
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *res;

	res = strcpy(dest, src);
	return (res);
}
