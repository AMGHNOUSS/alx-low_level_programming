#include "main.h"
/**
 * reverse_array - Copie a string
 * @a: integer
 * @n: integer
 * Return: Nothings
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
