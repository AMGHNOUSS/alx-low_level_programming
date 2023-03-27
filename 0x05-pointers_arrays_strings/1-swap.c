#include "main.h"

/**
 * swap_int - Swap value of two intergers
 * @a: integer
 * @b: integer
 * Return: Just printf
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
