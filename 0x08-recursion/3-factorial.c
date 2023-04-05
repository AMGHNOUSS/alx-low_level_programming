#include "main.h"
/**
 * factorial - Count factorial for n.
 * @n: Integer
 * Return: Int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
