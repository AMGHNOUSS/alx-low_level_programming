#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins.
 * @argc: integer
 * @argv: String
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum, cmp = 0;
	int tab[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[1]) >= 0)
	{
		sum = atoi(argv[1]);
		while (sum != 0)
		{
			for (i = 0; i < 5; i++)
			{
				if (sum >= tab[i])
				{
					sum -= tab[i];
					cmp++;
					break;
				}
			}
		}
		printf("%d\n", cmp);
	}
	return (0);
}
