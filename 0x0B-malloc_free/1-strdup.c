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
	while (str != NULL)
		i++;
	p = (char *)malloc(i * sizeof(*p) + 1);

	for (c = 0; c < i; c++)
		p[c] = str[c];

	p[c] = '\0';
	return (p);
}



