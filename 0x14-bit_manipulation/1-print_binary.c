#include "main.h"
/**
 * print_binary - Printing number binary
 * @n: Integer
 * Return: NOthings
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
