#include "main.h"

/**
* string_nconcat - string concatenates two strings
* @s1: string one
* @s2: string two
* @n: number of bytes for s2 to be include
*
* Return: returns pointer to the newly allocated space or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch, a, i, j;
	unsigned int e = 0, len, c = 0, m = 0, num1 = 0, num2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = s1[m]; i != '\0'; m++)
	{
		num1++;
	}
	for (j = s2[c]; j != '\0'; c++)
	{
		num2++;
	}
	if (num2 > n)
	{
		num2 = n;
	}
	ch = malloc(sizeof(char) * (num1 + num2) + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (len = 0, a = s1[e]; len < (num1 + num2); e++, len++)
	{
		if (a == '\0')
		{
			e = 0;
			a = s2[e];
		}
		ch[len] = a;
	}
	ch[len] = '\0';
	return (ch);
}
