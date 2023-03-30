#include "main.h"
/**
 * _strcmp - Copie a string
 * @s1: string
 * @s2: string
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 > *s2)
		return (15);
	else if (*s2 > *s1)
		return (-15);
	else
		return (0);
}
