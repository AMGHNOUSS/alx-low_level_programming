#include "main.h"
/**
 * sqrt2 - function for sqrt
 * @x: integer
 * @n: Integer
 * Return: INteger
 */
int sqrt2(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x == n / 2)
		return (-1);
	else
		return (sqrt2((x + 1), n));
}
/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: Integer
 * Return: Int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt2(0, n));
}
