/*
a program to read the numbers in an array and reverse the order of the elements.
*/

#include <stdio.h>

int main()
{
    int a[100], i, j, n, temp;
    printf("Enter number of numbers to be entered : ");
    scanf("%d",&n);
    for (i = 0;i < n; i++)
    {
        printf("Enter Number %d : ", (i+1));
        scanf("%d",&a[i]);
    }

    for ( i = 0, j = n-1; i < n/2,j > n/2; i++,j--)
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
    
    printf("the numbers in reversed order is\n");

    for (i = 0 ;i < n ; i++)
    {
        printf("%d\t",a[i]);
        
    }

}