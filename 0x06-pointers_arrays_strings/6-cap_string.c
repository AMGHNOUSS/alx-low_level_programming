#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: string
 * Return: string
 */
char *string_toupper(char *a)
{
	int i, j;
	char bb[] = {',',';','.','!','?','"','(',')','{','}',' ','\t','\n'}, *b;

	b = bb;
	for (i = 0; *(a + i); i++)
		for (j = 0; *(b + j);j++)
			if (*(a + i) == *(b + j))
				if (*(a + i) >= 65 && *(a + i) <= 122)
					*(a + i + 1) = *(a + i + 1) - 32;
	return (a);
}
