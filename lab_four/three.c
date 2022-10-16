/*
a program to display the given sequence up to nth term.
            1, 2, 5, 10, 17, 26 ....... nth term
*/

#include <stdio.h>

int main(void)
{
    int i,s = 1 ,n,a=1;
    printf("enter how many terms you want to display : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t",s);
        s = s + a;
        a = a + 2;
    }
    printf("\n");
    return 0;
}