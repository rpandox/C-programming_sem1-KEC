/*
a program to compute the sum of the given series up to nth term.
            1 – x^2 + x^4 – x^6 + x^8 - ......... nth term

*/


#include <stdio.h>
#include <math.h>
int main(void)
{
    int n,x,i,t,s = 0;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("enter the number of terms you want to display : ");
    scanf("%d",&n);
    for (i = 0; i < 2 * n; i+=2)
    {
        t = pow(-1,(i/2))*pow(x,i);
        s = s + t;
    }
    printf("sum is %d\n",s);
    return 0;
}