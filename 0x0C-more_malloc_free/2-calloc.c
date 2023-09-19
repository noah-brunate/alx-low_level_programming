#include "main.h"

/**
* _calloc - function allocates memory for an array
* @nmemb: number of elements in the array
* @size: bytes of each element
*
* Return: returns nothing or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *pt;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*((char *)pt + i) = 0;
	}
	return (pt);
}
