#include "main.h"

/**
* binary_to_uint - function converts binary to int
* @b: char pointer
*
* Return: the converted number or NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int j = 1;

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



