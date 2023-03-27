#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - The lenght of a string
 * @str: char
 * Return: Nothing
 */
void print_rev(char *str)
{
	int i, len;

	len = strlen(str) - 1;
	for (i = len; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
