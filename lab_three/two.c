/*
a program to test whether a given year is a leap year
*/
#include <stdio.h>

int main (void)
    {
    int year;

    printf("Enter the year :");
    scanf("%d",&year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        printf("the year %d is a leap year\n",year);
        else
        printf("the year %d is a not leap year\n",year);
    }
    else
    {
        if (year % 4 == 0)
        printf("the year %d is a leap year\n",year);
        else
        printf("the year %d is a not leap year\n",year);

    }

    return 0;
    
}