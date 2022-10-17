/*
a program to display the Fibonacci series (0 1 1 2 3 5 8 ..... up to given number of terms) 
                                        using recursion.
*/

#include <stdio.h>

int fibo (int);

int main()
{
    int n,i;
    printf("Number of terms you want to display : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",fibo(i));
    }
    printf("\n");
    return 0;   
}

int fibo(int n)
{
    if (n==0||n==1)
    return n;
    else 
    return(fibo(n-1)+fibo(n-2));
}
