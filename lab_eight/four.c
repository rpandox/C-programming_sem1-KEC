/*
 a program to find the larger of two numbers using the concept of function and pointers.
 */

#include <stdio.h>

void comp(int* , int* , int*);

int main(void)
{
    int n1 =0,n2 =0 ,large;
    
    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    printf("Enter Number 2 : ");
    scanf("%d",&n2);
    comp(&n1,&n2,&large);
    printf("The largest is %d whose address is %p\n",large, &large);
}

void comp(int* a, int* b, int* large )
{
    
    if (*a > *b)
    {
        *large = *a;
    }
    else
    {
        *large = *b;
    }
    
}