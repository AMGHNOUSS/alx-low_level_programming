#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, cmp = 1, j = 0;

	while (*(accept + j))
	{
		for (i = 0; *(s + i); i++)
		{
			if (*(accept + j) == *(s + i))
			{
				cmp++;
				break;
			}
		}
		j++;
	}
	return (cmp);
}
