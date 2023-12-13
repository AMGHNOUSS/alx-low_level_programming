#include "search_algos.h"

/**
 * jump_search - Search for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value searching
 * Return: -1 or index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index = 0, m, k = 0, prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
