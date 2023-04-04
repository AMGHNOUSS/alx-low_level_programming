#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, check = 0;
	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			for (j = 0; *(needle + j); j++)
			{
				if (*(needle + j) != *(haystack + (i + j)))
				{
					check = 1;
					break;
				}
			}
			if (check == 0)
				return (needle);
		}
	}
	return ('\0');
}
