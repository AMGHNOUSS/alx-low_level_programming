#include "main.h"
/**
 * times_table - Print the n times table
 * @n : integer
 * Return:  (Success)
 */
void print_times_table(int n)
{
	int i, j, res;
	
	if (n < 15 && n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			res = i * j;
			if (res >= 100)
			{
				_putchar(res / 100  + '0');
				_putchar((res % 100 ) / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (res >= 10 && res <= 99)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res + 48);
			}
		}
		_putchar('\n');
	}
	}
}
