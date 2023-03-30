#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: string
 * Return: string
 */
char *string_toupper(char *a)
{
	int i, j;
	char bb[] = {',',';','.','!','?','"','(',')','{','}',' ','\t','\n'};

	for (i = 0; *(a + i); i++)
		for (j = 0; bb[j] != '\0';j++)
			if (*(a + i) == bb[j])
				if (*(a + i) >= 65 && *(a + i) <= 122)
					*(a + i + 1) = *(a + i + 1) - 32;
	return (a);
}
