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
			for (k = i; k <= '9'; k++)
			{
				for (x = j + 1; x <= '9'; x++ )
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(x);
					if (i == '9' && j == '8'  && k == '9'  && x == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

