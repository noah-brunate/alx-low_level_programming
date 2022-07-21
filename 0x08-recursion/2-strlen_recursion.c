/**
* _strlen_recursion - siz
* @s: pointer to string params
* Return: recusion
*/

int _strlen_recursion(char *s)
{

	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

