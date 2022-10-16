 /*
 a program to create a number of user defined functions that takes arguments to find the 
          areas of rectangle and circle. The result must be displayed from main.
*/

#include <stdio.h>

#define PI 3.1415

float area_rect(float , float);
float area_circle(float);


int main(void)
{
    float ac,ar,l,b,r;
    printf("FOR  AREA OF RECTANGLE\n\n");
    printf("Enter Length : ");
    scanf("%f",&l);
    printf("Enter Breadth : ");
    scanf("%f",&b);
    printf("\n\nFOR  AREA OF CIRCLE\n\n");
    printf("Enter Radius : ");
    scanf("%f",&r);
    ar = area_rect(l,b);
    ac = area_circle(r);
    printf("\n\n");
    printf("AREA OF RECTANGLE = %.2f\n",ar);
    printf("AREA OF CIRCLE = %.2f\n",ac);
    return 0;
}

float area_rect(float l, float b)
{
    return (l * b);
}
float area_circle(float r)
{
    return (PI * r * r);
}
