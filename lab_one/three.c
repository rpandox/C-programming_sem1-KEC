/*
a program to read three numbers x, y and z 
to compute the values of a, b and c given by:
a) a = x+|y -z|     b)  b = sin^-1(√((x^2 + y^2)/2))    c) c = (x-z)^4/3
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, y, z, a, b, c, h1, h2, h3;

    printf("input x");
    scanf("%f",&x);

    printf("input y");
    scanf("%f",&y);

    printf("input z");
    scanf("%f",&z);


    a = x + fabs(y - z);

    h1 = (pow(x,2) + pow(y,2)) / 2;
    b = asin(sqrt(h1));

    h2 = x - z;
    h3 = 4 / (float) 3;
    c = pow(h2,h3);

    printf("value of a is %.2f/t value of b is %.2f/t value of c is %.2f/n",a,b,c);

    return 0;
}