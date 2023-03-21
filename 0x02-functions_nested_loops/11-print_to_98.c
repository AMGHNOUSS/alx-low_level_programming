#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print All natural numbers from n to 98
 *@n : integer
 * Return: void (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d", n);
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d", i);
	}
	else 
		for (i = n; i <= 98; i++)
			printf("%d", i);
	_putchar('\n');
}
