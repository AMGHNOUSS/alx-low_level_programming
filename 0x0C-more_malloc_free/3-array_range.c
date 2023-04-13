#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: Integer
 * @max: Integer
 * Return: Tab of Integer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, count;

	if (min > max)
		return (0);
	p = malloc((max - min) * sizeof(int) + 1);
	if (!p)
		return (0);
	for (i = 0; i < (max - min); i++)
	{
		*(p + i) = count;
		count++;
	}
	*(p + i) = max;
	return (p);
}
