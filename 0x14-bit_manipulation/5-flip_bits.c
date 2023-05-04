#include "main.h"
/**
 * flip_bits - Flip to another number
 * @n: Integer
 * @m: Integer
 * Return: Integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int i = 0;

	while (a != 0)
	{
		if (a & 1)
			i++;
		a = a >> 1;
	}
	return (i);
}
