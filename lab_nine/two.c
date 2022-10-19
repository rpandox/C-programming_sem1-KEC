/*
a program to create a structure in C to store the name of a batsman, runs scored, number of
          dismissals and batting average. In the program, read the data(name, runs and no. of dismissals)
          of five players and display the batting average of the player whose name is entered by the user. 
          Batting average is given by total runs/total no. of dismissals.
*/




#include <stdio.h>
#include <strings.h>

struct info
{
    char batsman[40];
    int runs_scored;
    int dismissials;
    int batting_average;
};



int main (void)
{
    struct info players[5];
    int i;
    char name[30];

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the name of batsman %d \n : ",i+1);
        fflush(stdin);
        gets(players[i].batsman);
        printf("Enter the runs scored by batsman %d \n : ",i+1);
        scanf("%d",&players[i].runs_scored);
        printf("Enter the number of dismmisals of batsman %d \n : ",i+1);
        scanf("%d",&players[i].dismissials);
    }

    printf("Enter the name of the players of whose you want to see batteling average\n : ");
    fflush(stdin);
    gets(name);

    for ( i = 0; i < 5; i++)
    {
        if(strcmp(name,players[i].batsman) == 0)
        {
            printf("Batting average of %s is %.2f\n", (float)(players->runs_scored)/(players->dismissials));
        }
    }
    
    
    return 0;
}