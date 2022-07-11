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
	int tmp[n];
	int a;

	for (a = 0; a < n; a++)
	{
		printf("Element[%d] = %d, \n", a, tmp[a]);
	}
	return (0);
}

