/*
a program to create a user defined function that finds the factorial of a number entered 
          by the user which takes argument. The result must be displayed in the main function.
*/

#include <stdio.h>


int fact(int);

int main()
{
    int n, f;
    printf("Enter The Number : ");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d is %d\n",n,f);
    return 0;
}

int fact(int n)
{
    int i,f=1;
    for (i = 1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}
