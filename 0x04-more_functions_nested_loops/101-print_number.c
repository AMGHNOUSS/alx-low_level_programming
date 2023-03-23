#include "main.h"
/**
 * print_number - Print number
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	int i, num, num1 = 1, count = 0;
	
	num = n;
	while (num != 0)
	{
		num /= 10;
		num1 *= 10;
		count++;
	}
	for (i = 1; i <= count; i++)
	{
		if (n > 9)
		{
			_putchar(n / num1 + '0');
			n /= 10;
			num1 /= 10;
		}
		else
			_putchar(n % 10 +'0');
	}
		_putchar('\n');
}
