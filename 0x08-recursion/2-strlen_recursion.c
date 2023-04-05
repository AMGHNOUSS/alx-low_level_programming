#include "main.h"
/**
 * _strlen_recursion - Return a length of a string.
 * @s: string
 * Return: nothings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
