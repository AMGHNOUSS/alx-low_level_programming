#include <stdlib.h>
#include <stdio.h>
/**
* main - Print the alphabet in lowercase, and thenin uppercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

        for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c= 'A'; c<= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

