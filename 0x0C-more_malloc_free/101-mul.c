#include <stdio.h>
#include <stdlib.h>
/**
 * length_of_argv - Calculate length of argv.
 * tab: String
 * Return: Integer
 */
int length_of_argv(*tab)
{
	int i = 0;

	while (*(tab + i))
		i++;
	return (i);
}
/**
 * main - mul two number
 * @argc: Integer
 * @argv: Strings
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int i, j;
	int len1, len2, sum_len;
	int *mul;

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
	len1 = length_of_argv(argv[1]);
	len2 = length_of_argv(argv[2]);
	sum_len = len2 + len1;
	mul = (int *)malloc(sizeof(int) * sum_len);
	while (i = 0; i < sum_len; i++)
		*(mul + i) = 0;
	return (0);
}
