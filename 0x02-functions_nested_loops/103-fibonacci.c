#include <stdio.h>
/**
 *main - Print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, sum;

	i = 0;
	j = 0;
	k = 1;
	sum = 0;
	while (i <= 4000000)
	{
		i = j + k;
		j = k;
		k = i;
		if(i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
