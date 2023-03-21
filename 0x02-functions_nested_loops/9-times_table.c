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
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar(res + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
				if(res > 10)
				{
					_putchar(res/10 + '0');
					_putchar(res%10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(res + '0');
				}
			}
			else 
			{
				if (res >= 10)
				{
					_putchar(res/10 + '0');
					_putchar(res%10 + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(res + '0');
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
