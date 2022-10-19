/*
a program to create a structure Student to store the name of student, roll number & marks 
        and read the details of five students and display the name and roll no. of the student with 
        highest marks.
*/

#include <stdio.h>

struct Student
{
        char name[30];
        int roll_no;
        int marks;
};


int main()
{
        int hm = 0;
        int i;  
        struct Student stu[5];
        for ( i = 0; i < 5; i++)
        {
                printf("Name of Student\n : ");
                fflush(stdin);
                gets(stu[i].name);      
                printf("Roll no of Student\n : ");
                scanf("%i",&stu[i].roll_no);     
                printf("Marks of Student\n : ");
                scanf("%i",&stu[i].marks);       
                if (stu[i].marks > hm)
                {
                        hm = stu[i].marks;
                }
        }

        for ( i = 0; i < 5; i++)
        {
                if (hm == stu[i].marks)
                {
                        printf("Highest scorrer is %s Rollno is %d\n",stu[i].name,stu[i].roll_no);
                }
        }
        
        

}