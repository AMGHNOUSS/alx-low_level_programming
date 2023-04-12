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
	for (i = 0; i < width; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
