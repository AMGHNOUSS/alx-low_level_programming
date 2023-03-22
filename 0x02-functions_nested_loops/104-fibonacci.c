#include <stdio.h>
/**
 *main - Print the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	float i, j, chng;
	int comp;

	comp = 1;
	i = 1;
	j = 2;
	printf("%.0f, ", i);
	while (comp <= 91)
	{
		comp++;
		chng = i + j;
		i = j;
		j = chng;
		if (comp == 98)
		{
			printf("%.0f", i);
			break;
		}
		printf("%.0f, ", i);
	}
	printf("\n");
	return (0);
}
