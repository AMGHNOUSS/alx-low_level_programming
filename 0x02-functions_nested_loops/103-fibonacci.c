#include <stdio.h>
/**
 *main - Print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, chng;

	comp = 1;
	i = 1;
	j = 2;
	while (i <= 4000000)
	{
		if (i % 2 == 0)
		{
			chng = i + j;
			i = j;
			j = chng;
		}
	}
	printf("%lu\n", i);
	return (0);
}
