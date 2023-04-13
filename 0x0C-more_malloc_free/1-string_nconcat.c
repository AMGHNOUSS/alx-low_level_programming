#include <stdlib.h>
/**
 * string_nconcat -  concatenate two strings.
 * @s1: Char
 * @s2: Char
 * @n: Integer
 * Return: String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;
	if (n > len2)
		n = len2;
	p = malloc(len1 + n + 1);
	if (!p)
		return (0);
	for (i = 0; i < len1; i++)
	{
		*(p + i) = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		*(p + i) = s2[j];
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
