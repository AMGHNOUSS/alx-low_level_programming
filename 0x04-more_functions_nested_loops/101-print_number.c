#include "main.h"
/**
 * print_number - Print number
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num > 9)
		print_number(num /10);
	_putchar(num % 10 + '0');
}
