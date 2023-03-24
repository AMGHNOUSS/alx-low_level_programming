#include <stdio.h>
/**
 *main - Prime factor
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 612852475143, j, res;

	for (j = 2; j <= n; j++)
	{
		if (n % j == 0)
		{
			n = n / j;
			res = i;
		}
	}
	printf("%lu", res);
	return (0);
}
