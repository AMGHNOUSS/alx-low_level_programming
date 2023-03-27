#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse string
 * @s: char
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0, len;
	char temp;

	len = strlen(s) - 1;
	while (len > i)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
}
