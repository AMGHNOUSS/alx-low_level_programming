#include <stdio.h>
/**
 * int_index - Searches for a integer
 * @array: Array of Integer
 * @size: Integer
 * @cmp: Function pointer
 * Return: Integer, index og elem
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);
}
