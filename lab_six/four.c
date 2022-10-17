/*
a program to calculate the sum of the digits of given integer up to single digit 
        using recursion.
*/

#include <stdio.h>

int sum_of_digits(int);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("sum if digits of %d is %d \n",n,sum_of_digits(n));
    return 0;
}

int sum_of_digits(int n)
{
    if (n < 10 )
    {
        return n;
    }
    else 
    return n%10 + sum_of_digits(n/10);
}