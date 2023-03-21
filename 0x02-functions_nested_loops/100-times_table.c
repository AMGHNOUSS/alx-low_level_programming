#include "main.h"
/**
 * times_table - Print the n times table
 * @n : integer
 * Return:  (Success)
 */
void times_table(int n)
{
	int i, j, res;

	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(44);
			_putchar(32);
			res = i * j;
			if (res >= 10)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(res + 48);
			}
		}
		_putchar('\n');
	}
}
