#include "search_algos.h"
/**
 * linear_search - Search for a value in an array of integers
 * using the Linear search algorithm
 * @array: Pointer of integer
 * @size: size of array
 * @value: number searching
 * Return: NUll or index of value
 */
int linear_search(int *array, size_t size, int value)
{
	for (size_t i = 0; i < size; i++)
	{
		if (value == *(array + i))
			return(i);
	}
	return (-1);
}
