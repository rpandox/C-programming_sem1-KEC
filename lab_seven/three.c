/*
a program to find the transpose of a given matrix.
*/

#include <stdio.h>

int main ()
{
    int mat[10][10], transpose[10][10], i, j, r, c;
    printf("Enter the number of rows  : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the element (%d,%d) : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            transpose[i][j]=mat[j][i];
        }
    }

    printf("the transposed matrix is \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}