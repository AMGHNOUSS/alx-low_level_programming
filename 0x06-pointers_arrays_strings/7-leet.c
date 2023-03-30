#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @a: string
 * Return: string
 */
char *leet(char *a)
{
	int i;

	for (i = 0; *(a + i); i++)
		if (*(a + i) == 65 || *(a + i) == 97)
			*(a + i) = 52;
		else if (*(a + i) == 69 || *(a + i) == 101)
			*(a + i) = 51;
		else if (*(a + i) == 79 || *(a + i) == 111)
			*(a + i) = 48;
		else if (*(a + i) == 76 || *(a + i) == 108)
			*(a + i) = 49;
		else if (*(a + i) == 84 || *(a + i) == 116)
			*(a + i) = 55;
	return (a);
}
