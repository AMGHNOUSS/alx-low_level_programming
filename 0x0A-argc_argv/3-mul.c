#include <stdio.h>
#include <stdlib.h>
/**
 *main -  multiplies two numbers.
 *@argc: Integer
 *@argv: String
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
