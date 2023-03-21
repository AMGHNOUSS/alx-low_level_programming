#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n : character
 * Return: 0 to 9 (Success)
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
		res = -res;
	return (res + '0');
}
