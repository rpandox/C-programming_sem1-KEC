/*
 a program to display following the patterns:
            a) 1                             b) PROGRAMMING
              121                                ROGRAMMIN
             12321                                OGRAMMI
            1234321                                GRAMM
           123454321                                RAM
            ......                                   A

*/

#include <stdio.h>
#include <string.h>
int main (void)
{
  char str[12] = "PROGRAMMING";
  int i,j,k, a=0,b=strlen(str);
  for (i = 0; i < 6; i++)
  {
    for( j = 0; j < i;j++)
    {
      printf(" ");
    }

    for ( j = a; j < b; j++)
    {
      printf("%c",str[j]);
    }
    printf("\n");
    a++;b--;
  }
}

void pattern_one()
{
  int i, j, k, l, n, s;
  printf("Enter the height of the program");
  scanf("%d",&n);
  s = n-1;

  //for rows
  for ( i = 0; i < n; i++)
  {
    //for spaces
    for( j = 0; j < s;j++)
    {
      printf(" ");
    }
    s = s-1;

    //for left triangular part
    for (k = 0; k <= i;k++)
    {
      printf("%d",(k+1));
    }

    //for right triangulr part
    for(l = i; l>0; l--)
    {
      printf("%d",l);
    }
    printf("\n");
  }
  
}