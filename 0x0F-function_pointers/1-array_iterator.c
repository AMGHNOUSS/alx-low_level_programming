#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter.
 * @array: Integer
 * @size: is the size of the array.
 * @action: is a pointer to the function you need to use.
 * Return: Nothings.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array))
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
