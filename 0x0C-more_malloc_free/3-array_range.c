#include "main.h"

/**
* array_range - function creates an array of integers
* @min: the first array element
* @max: the last array element
*
* Return: returns pointer t newly created array and NULL on failure
*/
int *array_range(int min, int max)
{
	int i, j, k;
	int *pt;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
		;

	pt = malloc(sizeof(int) * i);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (j = 0, k = min; k <= max; j++, k++)
	{
		*(pt + j) = k;
	}
	return (pt);
}
