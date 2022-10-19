/*
a program to read name and age as the two members of a structure named Students for 5 
        different students. Make two functions, first function to sort the data according to 
        their name alphabetically and second function to sort the data according to their age.
        Display the result of both functions from main.
*/


#include <stdio.h>
#include <string.h>

typedef struct students
{
        char name[30];
        int age;
} students;

void alpha(students* );
void age(students* );
int main()
{
        students std[5];
        students *stds[5];
        int i;

        for ( i = 0; i < 5; i++)
        {
                stds[i] = &std[i];
        }
        
        for ( i = 0; i < 5; i++)
        {
                printf("Enter Name of Student %d\n : ",i+1);
                fflush(stdin);
                gets(std[i].name);

                printf("Enter age of Student %d\n : ",i+1);
                scanf("%d",&std[i].age);
        }

        alpha(std);

        printf("ALPHABETICALLY\n\n");
        for ( i = 0; i < 5; i++)
        {
                printf("Name of Student %s\t",std[i].name);
                printf("Age age of Student %d\n",std[i].age);
        }

        age(std);  
        printf("\n\n");
        printf("According to age\n\n");
        for ( i = 0; i < 5; i++)
        {
                printf("Name of Student %s\t",std[i].name);
                printf("Age age of Student %d\n",std[i].age);
        }

        return 0;

}


void alpha(students *std)
{
        int i,j;
        char temp[30];
        int tmp;
        for ( i = 0; i < 5-1; i++)
        {
        for ( j = i+1; j < 5; j++)
        {
                if (strcmp(std[i].name,std[j].name) >= 1)
                {
                strcpy(temp,std[i].name);
                strcpy(std[i].name,std[j].name);
                strcpy(std[j].name,temp); 

                tmp = std[j].age;
                std[j].age = std[i].age;
                std[i].age = tmp;
                }
        }
        }
    return;

}
void age(students *std)
{
        int  i, j, tmp;
        char temp[30];
        for (i=0; i<5;i++)
        {
                for(j = 0; j < 5-1; j++)
                {
                if (std[j].age > std[i].age)
                {
                strcpy(temp,std[i].name);
                strcpy(std[i].name,std[j].name);
                strcpy(std[j].name,temp); 

                tmp = std[j].age;
                std[j].age = std[i].age;
                std[i].age = tmp;
                }
                }
        }
        return;
}