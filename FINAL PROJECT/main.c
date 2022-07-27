/*
This is for hotel management system
*/

#include <stdio.h>

#include <ctype.h>

#include<stdlib.h>

#include <string.h>

#include <time.h> 

// #include <conio.h> NO CONIO ON MAC
 

typedef struct emp
{
    char emp_name[50];      // name of employee
    int emp_id;             //employee id 
    char password[10];      //employee password
    int emp_sal;            //employee salary
    long long emp_phone;    //employee phone 
    int bonus;              // bonus for employee bonus = (0.01 of salary) per guest
    int guest_count;        // guest for the employee
}emp;

typedef struct admin
{
    int admin_id;
    char password[10];

} admin;

typedef struct gue
{
    char gue_name[50];
    long long gue_number;
    int gue_room_no;
    int total price;

}gue;




//THIS IS THE ENTRY PAGE
void Entry_page()
{
    printf(" ________________________________________________________________________\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\tTHIS IS THE MANAGEMENT SYSTEM FOR A HOTEL\t\t |\n");
    printf("|\t   +=================================================+\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tLOGIN PAGE\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t1. ADMINISTRATOR\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t2. HOTEL EMPLOYEE\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t3. GUEST\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t4. EXIT\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| _______________________________________________________________________|\n");

}

// This is choice for entry page
int choice_entry_page()
{
    char c,choice;


    Entry_page();           // prints login page
    c = getchar();          // enter choice
    choice = atoi(&c);      // take address
    //system("cls");
    system("clear");        // clear screen
    return choice;
    
}







void employee()
{
    return;
}


void administrator()
{
    return;
}

void guest()
{
    return;
}

void terminate()
{
    char c;
     printf(" ________________________________________________________________________\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\tYOU HAVE EXITED THE PROGRAM\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\tPress Any Key\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("| _______________________________________________________________________|\n");

}

int error()
{
    char e;
    printf(" ________________________________________________________________________\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\tERROR\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\tENTER AGAIN ?(y/n)\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("| _______________________________________________________________________|\n");

     e = toupper(getchar());  
     if (e == 'Y')
                return 1;
            else
            return 0;
}





int main (void)
{
    int choice;

    // for error
    char errror;
    int t;

    top:
    //system("cls");
    system("clear");

    choice = choice_entry_page();

    switch (choice)
    {
        case 0:
        return 0;
        case 1:
            administrator();
            break;

        case 2:
            employee();
            break;
        case 3:
            guest();
            break;
        case 4:
            exit:
            //system("cls");
            system("clear");
            terminate();
            getchar();
            //system("cls");
            //system("clear");
            return 0;
            break;
        
        default:
            t = error();
            if (t)
                goto top;
            else
            {
                goto exit;
            }

            break;
    } 
    
    
}