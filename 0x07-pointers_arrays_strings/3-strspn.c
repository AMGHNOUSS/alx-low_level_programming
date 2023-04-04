#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, check, j;

	while (*(s + i) != '\0')
	{
		check = 0;
		for (j = 0; *(accept + j); j++)
		{
			if (accept[j] == *(s + i))
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
			break;
		i++;
	}
	return (i);
}
