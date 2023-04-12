#include <stdlib.h>
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: Integer
 * @height: Integer
 * Return: Integer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **) malloc(sizeof(int *) * height);
	if (p == 0)
	{
		free(p);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *) malloc(sizeof(int) * width);
		if (*(p + i) == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(*(p + j));
			}
			free(p);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}
	return (p);
}
