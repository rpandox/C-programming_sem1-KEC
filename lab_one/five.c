/*
a program to read the radius of a circle and to compute its area and circumference 
Used a symbolic constant to define the value of π
*/
#include <stdio.h>
#define PI 3.1415

int main(void)
{
    float r, a, c;
    printf("enter Radius of circle");
    scanf("%f",&r);

    a = PI * r * r;
    c = 2 * PI * r;

    printf("area of circle is %.2f \t circumference of circle is %.2f \n",a,c);
    return 0;
}