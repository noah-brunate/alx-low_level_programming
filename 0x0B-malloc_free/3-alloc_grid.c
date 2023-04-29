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
	int i, j;
	int **p = (int **)malloc(width * height * sizeof(width));

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(p[i] + j) = 0;
		}
	}
	return (p);
}



