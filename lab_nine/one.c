/*
a program to create a structure Length to store length in feet & inches 
          and read two lengths and display their sum and difference.
*/

#include <stdio.h>

struct Length
{
    int feet;
    int inches;
};

int main()
{   
    struct Length a,b ,s ,d;
    int i;

    printf("For length a \n");
    printf("Enter Feet");
    scanf("%d",&a.feet);
    
    printf("Enter inch");
    scanf("%d",&a.inches);

    printf("For length b \n");
    printf("Enter Feet");
    scanf("%d",&b.feet);

    printf("Enter inch");
    scanf("%d",&b.inches);

    s.feet = a.feet + b.feet;
    s.inches = a.inches + b.inches;

    while(s.inches >= 12)
    {
        s.feet++;
        s.inches -=12;
    }

    d.feet = a.feet - b.feet;
    d.inches = a.inches - b.inches;

    while(d.inches < 0)
    {
        d.feet--;
        d.inches +=12;
    }
    
    printf("The sum is %d feet and %d inches",s.feet,s.inches);
    printf("The difference is %d feet and %d inches",d.feet,d.inches);

    return 0;
}