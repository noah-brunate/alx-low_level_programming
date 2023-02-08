#include "main.h"

/**
* alloc_grid - function returns a pointer to an array
* @width: width of the array
* @height: height of the array
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
	int *B[];
	int *p = (int *)malloc(sizeof(A));

	p = A;
	B = p;
	A[0] = 0;
	A[1] = 0;

	if (!p)
	{
		return (NULL);
	}
	return (p);
}
