#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL || size == 0)
		return (-1);
	for (low = 0, (high = size - 1); high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
