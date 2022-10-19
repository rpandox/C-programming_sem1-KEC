/*
a program to read two strings in main and compare them using user defined function. Display 
        appropriate message from main.
*/

#include <stdio.h>

int compare(char [],char[]);

int length(char[]);

int main(void)
{
    char w1[30],w2[30];
    int comp;//1 for greater -1 for smaller and 0 for equal

    printf("Enter a word : ");
    scanf("%s",w1);
    printf("Enter a word : ");
    scanf("%s",w2);

    comp = compare(w1,w2);


    switch (comp)
    {
    case 1:
        printf("%s comes before %s\n",w1,w2);
        break;
    
    case -1:
        printf("%s comes before %s\n",w2,w1);
        break;

    case 0:
        printf("the words are same\n");
        break;

    default:
        break;
    }
    return 0;
}


int length(char x[])
{
    int c =0,i;
    for (i = 0; x[i] != '\0'; i++)
    {
        c++;
    }
    
    return c;
}

int compare(char w1[],char w2[])
{
    int l,i,d;

    if (length(w1) > length(w2))
        l = length(w2);
    else
        l = length(w1);

    for (i = 0; w1[i] != '\0' ||w2[i] != '\0';i++)
    {
        d = w1[i] - w2[i];
        if (d != 0)
        {
            if (d>0)
                return -1;
            else
                return 1;
        }
    }
        return 0;
}