#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted arary
 * @array: table of integers
 * @size: size of table
 * @value: value searching
 * Return: -1 or index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;

	while (size)
	{
		f = ((double)(high - low) / (array[high] - array[low]));
		pos = low + ((size_t)f * (size_t)(value - array[low]));
		printf("Value checked array[%d]", (int)pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = %d\n", array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	return (-1);
}
