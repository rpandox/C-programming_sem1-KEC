/*
a program to read ‘n’ numbers and to sort them in the ascending order.
*/


#include <stdio.h>

int main()
{
    int n, i, j, a[100], temp;
    printf("Enter number of numbers to be entered : ");
    scanf("%d",&n);
    for (i = 0;i < n; i++)
    {
        printf("Enter Number %d : ", (i+1));
        scanf("%d",&a[i]);
    }
    for (i=0; i<n;i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("the numbers in sorted order is\n");

    for (i = 0 ;i < n ; i++)
    {
        printf("%d\t",a[i]);
        
    }
    return 0;
}