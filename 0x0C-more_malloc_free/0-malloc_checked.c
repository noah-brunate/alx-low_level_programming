#include "main.h"

/**
* malloc_checked - function allocates memory using malloc
* @b: number of bytes to allocate
*
* Return: returns pointer to the allocated block of memory
*/
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

