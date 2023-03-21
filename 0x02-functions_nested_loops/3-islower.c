#include "main.h"
/**
 * _islower - Check for lowercase
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int i;

	if (c > 96 && c < 123)
		return 1;
	else
		return 0;
	_putchar('\n');
}
