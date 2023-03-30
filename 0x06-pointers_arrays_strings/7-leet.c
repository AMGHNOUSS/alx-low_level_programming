#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @a: string
 * Return: string
 */
char *leet(char *a)
{
	int i, j;
	char tab1[] = {97, 101, 108, 111, 116}, tab2[] = {52, 51, 49, 48, 55};

	for (i = 0; *(a + i); i++)
		for (j = 0; j < 5; j++)
			if (*(a + i) == tab1[j] || *(a + i) == tab1[j] - 32)
				*(a + i) = tab2[j];
	return (a);
}
