/*
a program to find the roots of a quadratic equation ax + bx + c = 0. The program must 
first show whether the roots are real and unequal, real and equal or complex conjugates. In 
case of complex roots, the roots must be displayed in the form  x + yi , x - yi .
*/

#include <stdio.h>
#include <math.h>

int main (void)
{
    float a; float b; float c;

    float x; float x_abs; float y ; float z;
    float r1; float r2;

    printf("Enter a quadratic equation ax + bx + c = 0 : \n");

    printf("a = ");
    scanf("%f",&a);

    printf("b = ");
    scanf("%f",&b);

    printf("c = ");
    scanf("%f",&c);

    x = pow(b,2)- (4 * a * c);
    x_abs = sqrt(fabs(x));

    y = x_abs / (2 * a);

    z = (-1 * b) / (2 * a);

    r1 = z + x_abs;
    r2 = z - x_abs;

    if (x == 0)
    {
        printf("roots are real and equal\n");
        printf("roots are %.2f and %.2f",r1,r2);
    } 
    else if (x > 0)
    {
        printf("roots are real and unequal\n");
        printf("roots are %.2f and %.2f",r1,r2);
    }
    else
    {
        printf("roots are real and unequal\n");
        printf("roots are \n %.3f + %.3f i \t %.3f - %.3f i\n",z,y,z,y);
    }
    return 0;
}