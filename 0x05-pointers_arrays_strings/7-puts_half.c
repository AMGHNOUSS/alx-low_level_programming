#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 == 0)
		for (i = len / 2; i < len; i++)
			printf("%c", str[i]);
	else
		for (i = len / 2 + 1; i < len; i++)
			printf("%c", str[i]);
	printf("\n");
}
