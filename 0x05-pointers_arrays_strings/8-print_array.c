#include "main.h"
#include <stdio.h>
/**
* print_array -> prints elements
* @a: parameter1
* @n: parameter2
* Return: always 0
*/
void print_array(int *a, int n)
{
	int array[n];
	int i;

	for (i = 0; i < n; i++)
	{
		printf("Element[%d] = %d, \n", i, array[i]);
	}
	return ('\n');
}

