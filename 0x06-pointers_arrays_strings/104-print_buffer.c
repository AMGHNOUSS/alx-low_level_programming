#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Print number
 * @b: integer
 * @size: integer
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, res = 0;
	int p[] = {0, 0, 0, 0, 0, 0, 0, 0};

	if (size <= 0)
	       printf("\n");
	for (i = 0; *(b + i); i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (p[j] == 0)
				printf("%x", p[j]);
			else
			{
				res = res * 10 + p[j];
			}
		}
		printf("%x", res);
		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");
			printf("%x", *(b + j));
		}
		for (j = i; j < i + 10; j++)
		{
			printf("%c", *(b + j));
		}
		printf("\n");
		i = i + 10;
	}
}
