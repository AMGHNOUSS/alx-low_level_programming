#include <stdio.h>
/**
 *main - Print all argument followed by new line.
 *@argc: Integer
 *@argv: String
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
