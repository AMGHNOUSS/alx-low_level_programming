#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - print every other character of a string
 * @str: char
 * Return: Nothing
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str) - 1;
	for (i = 0; i <= len; i++)
		if (i % 2 == 0)
			printf("%c", str[i]);
	printf("\n");
}
