#include "main.h"
/**
 * more_numbers- Print number followed by a new line ten times
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
