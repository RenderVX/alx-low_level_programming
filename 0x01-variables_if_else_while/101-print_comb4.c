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
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (i >= j || i >= k || j >= k)
{
continue;
}
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
}
putchar(10);
}
