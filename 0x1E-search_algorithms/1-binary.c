#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: array of integers
 * @size: number of Integers
 * @value: number searhing
 * Return: -1 or index of value.
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int r = (int)size - 1, l = 0, m;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
