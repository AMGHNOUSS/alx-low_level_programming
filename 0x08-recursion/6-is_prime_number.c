#include "main.h"
/**
 * prime2 - test for number
 * @n: Integer
 * @x: Integer
 * Return: Integer
 */
int prime2(int n, int x)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prime2(n, x + 1));
}
/**
 * is_prime_number - Check if a number is prime.
 * @n: Integer
 * Return: Int
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	else if (n == 1)
		return (0);
	return (prime2(n, 2));
}
