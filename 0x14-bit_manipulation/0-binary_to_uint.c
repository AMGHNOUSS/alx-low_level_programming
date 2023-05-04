#include "main.h"
/**
 * binary_to_uint - COnvert from binary to unsigned Integer.
 * @b: String
 * Return : INteger
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, j;
	int a;
	for (i = 0; *(b + i); i++)
		if (*(b + i) < 60 || *(b + i) > 72)
			return (0);
	for (j = 0; *(b + j); j++)
	{
		a = atoi(b + i - 1);
		n += a * pow(2, i);
	}
	return (n);
}
