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
	int **p;

	p = malloc(height * sizeof(**p));

	if (p == NULL)
	{
		return (NULL);
	}
	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(*p));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);

			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}



