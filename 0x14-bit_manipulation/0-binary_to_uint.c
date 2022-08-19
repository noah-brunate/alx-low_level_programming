#include "main.h"

/**
* binary_to_uint - function converts binary to int
* @b: char pointer
*
* Return: the converted number or NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1;
	unsigned int j = 1;

	if (*(b + i) == '\0' || *(b + i) != ('0' || '1'))
	{
		return (0);
	}

	while (*(b + i) != '\0')
	{
		if (*(b + i) == '0')
		{
			j = j * 2;
		}
		else
		{
			j = (j * 2) + 1;
		}
		i++;
	}
	return (j);
}



