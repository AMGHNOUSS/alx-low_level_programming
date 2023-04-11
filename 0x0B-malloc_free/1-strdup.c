#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: String
 * Return: null if size = 0 or String
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int len = 0;

	if (!str)
		return (0);
	while (*(str + len))
		len++;
	p = malloc(sizeof(*str));
	while (i < len)
	{
		p[i] = *(str + i);
		i++;
	}
	return (p);
}
