#include "main.h"
/**
 * print_number - Print number
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	int i, num1 = 1, count = 0, num, num2;

	num = n;
	num2 = n;
	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			_putchar('-');
			num2 = -num2;
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
				_putchar(num2 / num1 + '0');
				num2 = num2 % num1;
				num1 /= 10;
			}
			else
				_putchar(num2 % 10 + '0');
		}
	}
}
