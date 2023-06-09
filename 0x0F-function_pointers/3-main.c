#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function main.
 * @argc: Integer
 * @argv: Integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((b == 0) && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
