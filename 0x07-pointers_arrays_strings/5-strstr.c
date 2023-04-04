#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	for (j = 0; *(needle + j); j++)
	{
		for (i = 0; *(haystack + i); i++)
			if (*(needle + j) == *(haystack + i))
				return (haystack + i);
	}
	return ('\0');
}
