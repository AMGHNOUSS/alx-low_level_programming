#include <stdio.h>
/**
 *main - Print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, chng;
	int comp;

	comp = 1;
	i = 1;
	j = 2;
	while (comp <= 50)
	{
		comp++;
		chng = i + j;
		i = j;
		j = chng;
		if (i % 2 == 0)
			printf("%lu", i);
	}
	printf("\n");
	return (0);
}
