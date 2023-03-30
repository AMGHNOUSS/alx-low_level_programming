#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @a: string
 * Return: string
 */
char *rot13(char *a)
{
	int i, j;
	char tab1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tab2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(a + i); i++)
	{
		for (j = 0; tab1[j] != 0; j++)
		{
			if (*(a + i) == tab1[j])
			{
				*(a + i) = tab2[j];
				break;
			}
		}
	}
	return (a);
}
