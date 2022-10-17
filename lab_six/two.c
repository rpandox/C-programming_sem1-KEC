/*
a program to find the factorial of the given number using
        recursion.
*/


#include <stdio.h>

int fact (int);
int main (void)
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,fact(n));
}
int fact (int n)
{
    if (n==0)
    {
        return 1;
    }
    else 
    return n * fact(n-1);
}