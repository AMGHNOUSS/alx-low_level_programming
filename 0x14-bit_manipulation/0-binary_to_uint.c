#include "main.h"
/**
 * binary_to_uint - Conivert from binary to unsigned Integer.
 * @b: String
 * Return: INteger
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, base = 1;

	if (!b)
		return (0);
	for (i = 0; *(b + i); i++)
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
	while (i)
	{
		n += (b[i - 1] - '0') * base;
		base *= 2;
		i--;
	}
	return (n);
}
