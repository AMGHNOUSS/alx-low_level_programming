#include "main.h"
/**
 * set_bet - Set the value of a bit to 1 at a given index.
 * @n: Integer
 * @index: INteger
 * Return: Integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return(n |= (1 << index));
}
