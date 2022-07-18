/*
program which requests a user to enter a weight in kg.
The program converts it in pounds (kg = 2.2 pounds)
*/
#include <stdio.h>
int main (void)
{
    float p , k;
    printf("enter weight in kilogram  : ");
    scanf("%f",&k);
    p = k / 2.2;
    printf("the weight in pounds is : %.2f \n",p);
    return 0;
}