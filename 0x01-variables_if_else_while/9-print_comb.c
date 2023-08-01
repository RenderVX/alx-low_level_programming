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
for (i = 48; i < 58; i++)
{
putchar(i);
if (i == 57)
{
break;
}
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
