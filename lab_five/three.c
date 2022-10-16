/*
a program to calculate the permutation and combination for given n and r. The permutation 
          and combination are defined for given n and r as:
            P(n, r) = n!/(n-r)!
            C(n, r) = P(n,r)/r!
            Define a function factorial, P and C to calculate above requirements.
*/

#include <stdio.h>


int factorial(int);
float P(int ,int);
float C(int ,int);

int main()
{
    int n,r;
    float p,c;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    p = P(n,r);
    c = C(n,r);
    printf("Permutation P(%d,%d) is %.0f \n",n,r,p);
    printf("Combination C(%d,%d) is %.0f \n",n,r,c);
    return 0;
}

int factorial(int n)
{
    int i,f=1;
    for (i = 1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}

float P(int n,int r)
{
  return (factorial(n)/(factorial(n-r)));
}
float C(int n,int r)
{
  return ((P(n,r))/(factorial(r)));
}