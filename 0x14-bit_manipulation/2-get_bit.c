#include "main.h"
/**
 * get_bit - Return the value of a bit at a given index.
 * @n: integer
 * @index: Integer
 * Return: Integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
