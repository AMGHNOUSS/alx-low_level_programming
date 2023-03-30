#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: string
 * Return: string
 */
char *cap_string(char *a)
{
	int i = 0, j;
	char bb[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	char *b;

	b = bb;
	if (*(a + i) >= 97 && *(a + i) <= 122)
		*(a + i) = *(a + i) - 32;
	for (i = 0; *(a + i); i++)
		for (j = 0; *(b + j); j++)
			if (*(a + i) == *(b + j))
				if (*(a + i + 1) > 96 && *(a + i + 1) < 123)
					*(a + i + 1) = *(a + i + 1) - 32;
	return (a);
}
