#include <stdlib.h>
#include <stdio.h>
/**
* main - Print the alphabet in lowercase in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
