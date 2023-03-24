#include <stdio.h>
/**
 *main - Prime factor
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 600, i, j, count = 0, res;

	for (i = 1; i < n / 2; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
			if (i % j == 0)
				count++;
		if (count == 2)
			res = i;
	}
	return (res);
}
