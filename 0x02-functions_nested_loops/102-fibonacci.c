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

	comp = 0;
	i = 1;
	j = 2;
	printf("%d, %d, ", i, j);
	while (comp < 50)
	{
		comp++;
		num = i + j;
		i = j;
		j = num;
		printf("%d, ", i);
	}
	printf("\n");
	return (0);
}
