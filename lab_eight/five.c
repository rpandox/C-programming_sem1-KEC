/*
a program to illustrate the concept of pointer expressions.
*/


#include <stdio.h>

int main(void)
{
    int n; //regular variable
    int *p; // pointer vatiable
    
    p = &n; // variable p stores address of n but *p stores n

    // scanf("%d", &n); 
    // scanf("%d", p);

    printf("Enter the number n : ");
    scanf("%d", p);

    printf(" n = %d \tp = %p \t *p = %d\n", n , p ,*p);

}