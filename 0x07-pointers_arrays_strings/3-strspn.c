#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cmp = 0;
	int i;

	while (*accept)
	{
		for (i = 0; *(s + i); i++)
		{
			if (*accept == *(s + i))
			{
				cmp++;
				break;
			}
		}
		accept++;
	}
	if (*accept == '\0')
		cmp++;
	return (cmp);
}
