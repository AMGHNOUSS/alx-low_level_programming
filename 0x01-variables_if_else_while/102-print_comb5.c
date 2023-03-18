#include <stdlib.h>
#include <stdio.h>
/**
* main - Print all possible different combinations of two two-digit
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (x = '0'; x <= '9'; x++)
				{
					if (i * 10 + j < k * 10 + x)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(x);
						if (i * 1000 + j * 100 + k * 10 + x == '9899')
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

