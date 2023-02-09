#include "main.h"

/**
* str_concat - function concatenates two strings
* @s1: string 1
* @s2: second 2
*
* Return: returns a pointer to a string or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	p = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			p[c] = s1[c];
		else
			p[c] = s2[d++];
	}

	return (p);
}



