/*
a program to read ‘n’ words and use user defined function to arrange and display them in 
        the alphabetical order.
*/


#include <stdio.h>
#include <string.h>

void sorted(char[][30],int);

int main(void)
{
    char words [100][30];
    int n, i;

    printf("Enter the amount of words you want to enter : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter word %d \n : ", i+1);
        scanf("%s",words[i]);
    }
    

    sorted(words, n);

    return 0;
}

void sorted(char words[][30], int n)
{
    int i,j;
    char tmp[30];
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (strcmp(words[i],words[j]) >= 1)
            {
                strcpy(tmp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],tmp); 
            }
        }
    }
    printf("Words in sorted order are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%s\n",words[i]);
    }
    
    return;
}