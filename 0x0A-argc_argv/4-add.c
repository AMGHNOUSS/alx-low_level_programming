#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add numbers positive.
 * @argc: integer
 * @argv: String
 * Return: on success 0 and 1 on fail
 */
int main(int argc, char *argv[])
{
	int res = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
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
