#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the opcodes of its own main function.
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, i;
	int (*address)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
	{
		opc = *(unsigned char *)address;

		printf("%.2x", opc);
		if (i == a - 1)
			break;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
