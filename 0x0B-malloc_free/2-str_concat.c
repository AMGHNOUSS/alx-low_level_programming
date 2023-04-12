#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: String
 * @s2: String
 * Return: null if size = 0 or String
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int j = 0, i = 0, len_s1 = 0, len_s2 = 0;

	if (s1 != 0)
	{
		while (*(s1 + len_s1))
			len_s1++;
	}
	if (s2 != 0)
	{
		while (*(s2 + len_s2))
			len_s2++;
	}
	p = malloc(len_s1 + len_s2 + 1);
	if (p == 0)
		return (0);
	while (i < len_s1)
	{
		p[i] = *(s1 + i);
		i++;
	}
	while (j < len_s2)
	{
		p[i] = *(s2 + j);
		i++;
		j++;
	}
	return (p);
}
