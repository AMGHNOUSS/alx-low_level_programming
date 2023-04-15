#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul two number
 * @argc: Integer
 * @argv: Strings
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	printf("%lu\n", (atol(argv[1]) *  atol(argv[2])));
	return (0);
}
