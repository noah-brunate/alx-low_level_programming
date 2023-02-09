#include "main.h"

/**
* alloc_grid - prints a grid of integers
* @width: width of the grid
* @height: height of the grid
*
* Return: returns a pointer to an array and NULL on failure
*/
int **alloc_grid(int width, int height)
{
	if (width == 0 || height == 0)
	{
		return (NULL);
	}


	int A[height][width];
	int i, j, **p = (int *)malloc(width * height * sizeof(int));

	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			A[i][j] = 0;
			*(p[i] + j) = A[i][j];
		}
	}
	return (p);
}



