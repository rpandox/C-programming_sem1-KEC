/*
a program to read a positive integer n and check weather a number is odd or even using switch case
*/
#include <stdio.h>

int main(void)
{
    int n,a;
    printf("Enter a number: ");
    scanf("%i",&n);
    if (n < 0)
    {
        printf("ERROR\n");
        return 1;
    }
    a = n % 2;
    switch(a)
    {
    case 0:
        printf("the number is EVEN\n");
        break;
    case 1:
        printf("the number is ODD\n");
        break;
    default:
        printf("ERROR\n");
    }
    return 0;
}