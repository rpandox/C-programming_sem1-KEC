/*
a program to input name, post and salary of 5 employees from main() function and pass
        to structure type user defined function(arguments of this function should also be a 
        structure type). This function returns structure variable which keeps the record of 
        only those employees whose salary is greater than 10,000. This modified record is also 
        displayed from main() function.
*/

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[30];
    char post[30];
    long salary;
}employee;


void empl(employee *,int *,employee *);
int main()
{
    employee emp[5];
    employee e [5];
    int i,l;

    printf("Enter Data of Five employees\n\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Name\n : ");
        fflush(stdin);
        gets(emp[i].name);

        printf("Enter Post\n : ");
        fflush(stdin);
        gets(emp[i].post);

        printf("Enter Salary\n : ");
        scanf("%li",&emp[i].salary);

    }
    
    empl(emp,&l,e);

    for ( i = 0; i < l; i++)
    {
        printf("Name\n : %s\n",e[i].name);

        printf("Post\n : %s\n",e[i].post);

        printf("Salary\n : %li\n",e[i].salary);
        
    }
    

}

void empl(employee *emp , int* l,employee * e)
{
    int i;
    int li = 0;
    for ( i = 0; i < 5; i++)
    {
        if (emp[i].salary > 10000)
        {
            strcpy(e[li].name,emp[i].name);
            strcpy(e[li].post,emp[i].post);    
            e[li].salary = emp[i].salary;                
            li++;
        } 
    }
    *l = li;
    return ;
    
}