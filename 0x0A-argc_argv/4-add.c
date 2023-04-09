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
	int res = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			res += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", res);
	return (0);
}
