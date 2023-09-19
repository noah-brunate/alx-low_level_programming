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
	char *ch;
	unsigned int a, b, i, j, num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	if (j > num)
	{
		j = num;
	}
	ch = malloc(sizeof(char) * (i + j) + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		*(ch + a) = s1[a];
	}
	for (b = 0; b < j; b++)
	{
		*(ch + a + b) = s2[b];
	}
	*(ch + a + b + 1) = '\0';
	return (ch);
}
