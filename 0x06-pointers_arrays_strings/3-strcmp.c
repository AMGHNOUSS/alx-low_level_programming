#include "main.h"
/**
 * _strcmp - Copie a string
 * @s1: string
 * @s2: string
 * Return: 1 or 15 or -15
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r, cmp = 0, cmp1 = 0, cmp2 = 0;

	while (*(s1 + cmp) != '\0')
		cmp1++;
	while (*(s2 + cmp) != '\0')
		cmp2++;
	if (cmp1 <= cmp2 )
		cmp1 = cmp2;
	for (i = 0; i < cmp1; i++)
	{
		if (*(s1 + i) < *(s2 + i))
		{
			r = *(s1 + i) - *(s2 + i);
			return (r);
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			r = *(s1 + i) - *(s2 + i);
			return (r);
		}
	}
	return (0);
}
