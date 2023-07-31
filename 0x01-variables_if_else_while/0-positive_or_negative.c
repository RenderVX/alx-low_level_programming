#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/**
* main -  does smth
* Return: integer
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
    printf("%i is zero", n);
}
else if (n > 0)
{
    printf("%i is positive", n);
}
else
{
    printf("%i is negative", n);
}
printf("\n");
	/* your code goes there */
return (0);
}
