/*
a program to convert the decimal number given by the user into binary using recursion.
*/


#include <stdio.h>


int to_binary(int);

int main()
{
    int n;
    printf("Enter Decimal Number");
    scanf("%d",&n);
    printf("number in binary is %d\n",to_binary(n));
}

int to_binary(int n)
{
    if (n == 0)
    return 0;
    else{
    return (n % 2)+ 10 * to_binary(n/2);
    }
}