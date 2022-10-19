/*
a program to input name, post and salary of 5 employees from main() function and pass
        to structure type user defined function(arguments of this function should also be a 
        structure type). This function returns structure variable which keeps the record of 
        only those employees whose salary is greater than 10,000. This modified record is also 
        displayed from main() function.
*/

#include <stdio.h>


typedef struct employee
{
    char name[30];
    char post[30];
    double salary;
}employee;


void empl(employee *,int *,employee *);
int main()
{
    employee emp[5];
    employee e [5];
    int i,l = 0;

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
        scanf("%ld",&emp[i].salary);

    }
    
    empl(emp,&l,e);

    for ( i = 0; i < l; i++)
    {
        printf("Name\n : %s\n",e[i].name);

        printf("Post\n : %s\n",e[i].post);

        printf("Salary\n : %ld\n",e[i].salary);
        
    }
    

}

void empl(employee *emp , int* l,employee * e)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        if (emp[i].salary > 10000)
        {
            e[*l] = emp[i];
            *l++;
        } 
    }
    return ;
    
}