#include "main.h"
/**
 * _strlen_recursion - Return a length of a string.
 * @s: string
 * Return: nothings
 */
int _strlen_recursion(char *s)
{
	int cmp = 0;

	if (*s == '\0')
	{
		return (cmp);
	}
	cmp++;
	return _strlen_renursion(s + 1);
}
