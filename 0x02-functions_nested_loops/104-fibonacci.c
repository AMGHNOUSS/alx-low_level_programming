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
	printf("%lu, ", i);
	while (comp <= 98)
	{
		comp++;
		chng = i + j;
		i = j;
		j = chng;
		if (comp == 98)
		{
			printf("%lu", i);
			break;
		}
		printf("%lu, ", i);
	}
	printf("\n");
	return (0);
}
