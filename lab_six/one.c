/*
a program to find the sum of natural numbers up to the number given by the user 
          using recursion.
*/



#include <stdio.h>

int sum (int);
int main (void)
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("sum upto %d is %d\n",n,sum(n));
}
int sum (int n)
{
    if (n<=0)
    {
        return 0;
    }
    else 
    return (n + sum (n-1));
}