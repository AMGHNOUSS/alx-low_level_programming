#include "main.h"
/**
 * times_table - Print the 9 times table
 *
 * Return:  (Success)
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
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
