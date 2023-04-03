#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: string
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
