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
	char *p = (char *)malloc(sizeof(char));

	if (s1 == NULL)
		s1 = ""
	if (s2 == NULL)
		s2 = ""
	if (!p)
		return (NULL);
	p = s1 + s2;
	return (p);
}


