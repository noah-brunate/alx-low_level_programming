#include "main.h"

/**
* create_array - function creates an array and initializes it a char
* @size: size of the array to be created
* @c: values to initialize the array
* Return: returns NULL if size is 0 or if it fails else returnsa char pointer
*/
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	if (p)
	{
		p[0] = c;
	}
	return (p);

}


