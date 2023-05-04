#include "main.h"
/**
 * clear_bit - Set the value of a bit to 0 at given index.
 * @n: Integer
 * @index: Integer
 * Return: Integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
		return (1);
}
