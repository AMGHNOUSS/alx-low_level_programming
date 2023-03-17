#include <stdlib.h>
#include <stdio.h>
/**
* main - Print all possible cominations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(', ');
	}
	putchar('$');
	putchar('\n');
	return (0);
}
