/*
 a program to swap the values of two numbers.
 */

#include <stdio.h>

void swap(int*,int*);
int main(void)
{
    int a , b;
    printf("Enter Number 1 : ");
    scanf("%d",&a);
    printf("Enter Number 2 : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Enter Number 1 is %d\n",a);
    printf("Enter Number 2 is %d\n",b);
}

void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}