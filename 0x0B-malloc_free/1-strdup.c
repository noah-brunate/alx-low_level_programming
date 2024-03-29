#include "main.h"

/**
* _strdup - function returns a pointer to duplicate string
* @str: string to be allocated
*
* Return: a char pointer
*/
char *_strdup(char *str)
{
	int c, i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	p = (char *)malloc((i * sizeof(*str)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
		p[c] = str[c];
	p[c] = '\0';

	return (p);
}



