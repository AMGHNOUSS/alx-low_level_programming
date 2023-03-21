#include <stdio.h>
/**
 *main - Print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, comp, chng;

	comp = 0;
	i = 1;
	j = 0;
	while (comp < 50)
	{
		printf("%d, ", i);
		comp++;
		chng = i;
		i = j;
		j = i;
	}
	printf("\n");
	return (0);
}
