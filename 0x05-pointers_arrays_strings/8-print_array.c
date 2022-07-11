#include "main.h"
#include <stdio.h>
/**
* print_array -> prints elements
* @a: parameter1
* @n: parameter2
* Return: elements of an array of integers
*/
void print_array(int *a, int n)
{
	int *a[n];
	int j;

	for (j = 0; j < n; j++)
	{
		printf("Element[%d] = %d, \n", j, *a[j]);
	}
	return (n);
}

