/*
a program that reads a co-ordinate point of rectangle coordinate system and displays the
the appropriate message after checking where the point lies on the co-ordinate system.
*/
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("enter x,y : ");
    scanf("%d,%d",&x,&y);
    if (x == 0)
    {
        if (y == 0)
        {
            printf("the point is origin");
        }
        else if(y > 0 || y < 0)
        {
            if (y > 0)
                printf("the point (%d,%d) lies on y axis above x axis",x,y);
            else 
                printf("the point (%d,%d) lies on y axis below x axis",x,y);
        }
    }
    else if (x > 0)
    {
        if (y == 0)
        {
            printf("the point (%d,%d) lies on x axis right of y axis",x,y);
        }
        else if(y > 0 || y < 0)
        {
            if (y > 0)
                printf("the point (%d,%d) lies on First Quadrent",x,y);
            else 
                printf("the point (%d,%d) lies on Fourth Quadrent",x,y);
        }
    }
    else 
    {
        if (y == 0)
        {
            printf("the point (%d,%d) lies on x axis left of y axis",x,y);
        }
        else if(y > 0 || y < 0)
        {
            if (y > 0)
                printf("the point (%d,%d) lies on Second Quadrent",x,y);
            else 
                printf("the point (%d,%d) lies on Third Quadrent",x,y);
        }
    }
    return 0;

}