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
	if (p)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(sizeof(int) * width);
			if (p[i])
			{
				for (j = 0; j < width; j++)
				{
					p[i][j] = 0;
				}
			}
			else
			{
				free(p);
			}
		}
	}
	else
	{
		return (0);
	}
	return (p);
}
