#include "main.h"
/**
 * is_prime_number - Check if a number is prime.
 * @n: Integer
 * Return: Int
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (n / _is_prime_number(n - 1));
}
