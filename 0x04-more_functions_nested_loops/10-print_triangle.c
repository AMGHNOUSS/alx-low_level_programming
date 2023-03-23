#include "main.h"
/**
 * print_triangle - Print traingle followed by new line
 * @size: integer
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, s;

	s = size - 1;
	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= s; j++)
				_putchar(' ');
			for (j = s + 1; j <= size; j++)
				putchar('#');
			s--;
			_putchar('\n');
		}
	else
		_putchar('\n');
}
