#include "main.h"
/**
 * isupper - Check uppercase character
 * @c: integer
 * Return: 1 or 0
 */
int isupper(int c)
{
	if (c >= '65' && c <= '90')
		return (1);
	else
		return (0);
}
