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
			for (j = 0; j < s; j++)
				_putchar(' ');
			for (j = s; j < size; j++)
				_putchar('#');
			s--;
			_putchar('\n');
		}
	else
		_putchar('\n');
}
