#include <stdio.h>
/**
 *main - Print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, sum;

	i = 0;
	j = 1;
	k = 0;
	sum = 0;
	while (i <= 4000000)
	{
		k = i + j;
		i = j;
		j = i;
		if(i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
