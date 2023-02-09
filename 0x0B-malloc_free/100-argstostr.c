#include "main.h"

/**
* argstostr - function concatenates all the arguments of your program
* @ac: the number of arguments
* @av: the array of arguments
*
* Return: pointer to a new string or NULL on failure
*/
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int i = 0;
	int *p = (int *)malloc(sizeof(int) * ac + ac + 1);

	while (i < ac)
	{
		*(p + i) = av[i];
		*(p + i + 1) = '\n';
		i++;
	}
	*(p + i + 2) = '\0';
	if (!p)
		return (NULL);
	return (p);
}



