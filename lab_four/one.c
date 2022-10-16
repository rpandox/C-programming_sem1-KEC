/*
a program to take positive integers as input until 0 is entered 
and compute the average of even numbers entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int n, i = 0, s = 0;
    float avg;
    while(1)
    {
        printf("Enter Your number %d : ",(i+1));
        scanf("%d",&n);
        if (n == 0)
        break;
        i++;
        s = s + n;
    }
    avg = (float)s/(float)i;
    printf("the average is %.2f\n",avg);
    return 0;
}