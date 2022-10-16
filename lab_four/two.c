/*
a program to check if a number is triangular or not.
(e.g. 3 = 1+2, 6 = 1+2+3, 10 = 1+2+3+4,.....)
*/

#include <stdio.h>

int main (void)
{
    int n,i,s=0;
    printf("Enter the number :" );
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        s=s+i;
        if (s >= n)
        {break;}
    }
    if (s == n)
    {                   
        printf("the number is triangular\n");
    }
    else{
        printf("the number is not triangular\n");
    }   
    return 0;
}