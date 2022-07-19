/*
a program to accept temperature in Fahrenheit and convert it into degrees Celsius
*/


#include <stdio.h>

int main(void)
{
    float f, c;
    printf("Enter the temperature in Farenheit :");
    scanf("%f",&f);

    c = ((f-32)*5)/9;
    printf("The temperature in Celsius is %.2f \n",c);
    return 0;
}
