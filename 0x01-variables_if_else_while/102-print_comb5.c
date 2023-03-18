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
		for (j = '0'; j <= '9'; j++)
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
						if (i == '9')
							if (j == '8')
								if (k == '9')
									if (x == '9')
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

