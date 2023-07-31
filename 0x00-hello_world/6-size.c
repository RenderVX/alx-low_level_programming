#include <stdio.h>

/**
* main -  does smth
* Return: integer
*/



int main(void)
{

int a, b, c, d, e;
a = sizeof(char);
b = sizeof(int);
c = sizeof(long int);
d = sizeof(long long int);
e = sizeof(float);



printf("Size of a char: %i byte(s)\nSize of an int: %i byte(s)\nSize of a long int: %i byte(s)\n", a, b, c);
printf("Size of a long long int: %i byte(s)\nSize of a float: %i byte(s)\n", d, e);
return (0);


}
