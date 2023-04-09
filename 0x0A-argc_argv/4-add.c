#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add numbers positive.
 * @argc: integer
 * @argv: String
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int res = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 1; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
