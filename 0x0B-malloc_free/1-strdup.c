#include "main.h"

/**
* _strdup - function returns a pointer to duplicate string
* @str: string to be allocated
*
* Return: a char pointer
*/
char *_strdup(char *str)
{
	int c, i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str != '\0')
		i++;
	p = (char *)malloc(i * sizeof(char) + 1);

	for (c = 0; c < i; c++)
		p[c] = str[c];

	*(p + i + 1) = '\0';

	if (!p)
	{
		return (NULL);
	}
	return (p);
}



