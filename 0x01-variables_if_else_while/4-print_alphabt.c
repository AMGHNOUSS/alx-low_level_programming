#include <stdlib.h>
#include <stdio.h>
/**
* main - Print the alphabet in lowercase except 'q' and 'e'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' || c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
