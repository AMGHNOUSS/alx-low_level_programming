#include "main.h"
/**
 * _islower - Check for lowercase
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
