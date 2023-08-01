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
int i,j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
if (i >= j)
{
continue;
}
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
putchar(10);
}
