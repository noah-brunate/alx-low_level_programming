#include <stdlib.h>
#include <time.h>
#include <studio>

/**
*main -> assign a random number to the variable n each time it is executed
*and print the last digit of the number stored in the variable
*Return : always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
Printf("Last digit of %d is ",n);
if (n > 5)
{
          Printf("greater than 5");
}
if (n == 0)
          Printf("0");
}
if (n < 0 && n !=0)
{
          Printf("less than 6 not 0");
}

Printf("\n");

