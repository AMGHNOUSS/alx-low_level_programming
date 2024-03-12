#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using the Linear
 * @array: list of integrs.
 * @size: lenght of list.
 * @value: value that i want to found.
 * Return: Integer or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, L, R, m;

	if (array == NULL)
		return (-1);
	L = 0;
	R = size - 1;

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = L + (R - L) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			R = m - 1;
		else
			L = m + 1;
	}
	return (-1);
}
