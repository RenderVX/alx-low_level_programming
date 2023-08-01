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
int i, j, k, l;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
for (l = 48; l < 58; l++)
{
if (i > k || (j >= l && i == k))
{
continue;
}
putchar(i);
putchar(j);
putchar(32);
putchar(k);
putchar(l);
if (i == 57 && j == 56 && k == 57 && l == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
