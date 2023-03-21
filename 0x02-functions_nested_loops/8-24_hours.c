#include "main.h"
/**
 * jack_bauer - Print every minute of the day of JAck Bauer
 *
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int i, j, k, x;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (x = 0; x <= 9; x++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(x);
					_putchar('\n');
					if (i == 2 && j == 3 && j == 5 && x = 9)
					break;
				}
			}
		}
	}
	return (0);
}
