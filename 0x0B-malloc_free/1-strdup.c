#include "main.h"

/**
* _strdup - function returns a pointer to duplicate string
* @str: string to be allocated
*
* Return: a char pointer
*/
char *_strdup(char *str)
{
	char *p = (char *)malloc(sizeof(char));

	p = str;
	if (str == NULL)
	{
		return (NULL);
	}
	if (!p)
	{
		return (NULL);
	}
	return (p);
}



