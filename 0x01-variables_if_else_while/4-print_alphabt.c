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

int i;
for (i = 97; i < 123; i++)
{
if (i == 101 || i == 113)
{
continue;
}
putchar(i);
}

putchar(10);
return (0);

}
