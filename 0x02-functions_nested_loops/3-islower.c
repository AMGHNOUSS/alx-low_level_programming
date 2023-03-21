#include "main.h"
/**
 * _islower - Check for lowercase
 * @c : character
 * Return: 0 or 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
