#include "main.h"
/**
 * print_number - Print number
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	int i, num1 = 1, count = 0, num;

	num = n;
	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		while (num != 0)
		{
			num /= 10;
			count++;
		}
		for (i = 1; i < count; i++)
			num1 = num1 * 10;
		for (i = 1; i <= count; i++)
		{
			if (num1 != 1)
			{
				_putchar(n / num1 + '0');
				n = n % num1;
				num1 /= 10;
			}
			else
				_putchar(n % 10 + '0');
		}
	}
}
