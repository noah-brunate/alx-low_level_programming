#include <stdio.h>

/**
* main -> entry point
* Return: always 0
*/
int main(void)
{
	int x;
	char i[] = "Fizz";
	char j[] = "Buzz";
	char k[] = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("%s ", k);
		else if (x % 3 == 0)
			printf("%s ", i);
		else if (x % 5 == 0)
			printf("%s ", j);
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}

