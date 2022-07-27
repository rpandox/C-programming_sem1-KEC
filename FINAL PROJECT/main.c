/*
This is for hotel management system
*/

#include <stdio.h>

#include <ctype.h>

#include<stdlib.h>

#include <string.h>

#include <time.h> 

// #include <conio.h> NO CONIO ON MAC
 

typedef struct emp_desk
{
    char emp_name[50];      // name of employee
    int emp_id;             //employee id 
    char password[10];      //employee password
    int emp_sal;            //employee salary
    long long emp_phone;    //employee phone 
    int emp_bonus;          // bonus for employee bonus = (0.01 of salary) per guest
    int guest_count;        // guest for the employee
    int type;               // parttime or not
}desk_emp;

typedef struct emp_service
{
    char emp_name[50];      // name of employee
    int emp_id;             //employee id 
    char password[10];      //employee password
    int emp_sal;            //employee salary
    long long emp_phone;    //employee phone 
    int emp_bonus;          // bonus for employee bonus = (0.01 of salary) per guest
    int guest_count;        // guest for the employee
    int type;               // parttime or not
}ser_emp;

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
    int total_price;
    int times_visited;
    int loyalty_points;
    char room_service_needed;
    

}gue;




/*
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
*/


void page_header()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    printf(" ________________________________________________________________________\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t %d-%d-%d \t |\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\tTHIS IS THE MANAGEMENT SYSTEM FOR A HOTEL XXX\t\t |\n");
    printf("|\t   +=================================================+\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
}


void body_entrypage()
{
    printf("|\t\t\t\tLOGIN PAGE\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t1. ADMINISTRATOR\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t2. HOTEL EMPLOYEE\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t3. EXIT\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    
}

void page_bottom()
{
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

    // prints login page
    page_header();
    body_entrypage();
    page_bottom();
               
    scanf("%c",&c);         // enter choice
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
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    char c;
    printf(" ________________________________________________________________________\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t %d-%d-%d \t |\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
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
    getchar();

}

void errorpage()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" ________________________________________________________________________\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t %d-%d-%d \t |\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\tERROR\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\tENTER AGAIN ?(y/n)\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("|\t\t\t\t\t\t\t\t\t |\n");
     printf("| _______________________________________________________________________|\n");
     getchar();
}

int error()
{
    char e,f;
    int i;
     scanf("%c", &e);
    f = toupper(e);
    if (e == 'Y')
        i = 1;
    else
        i = 0;
        return i;
}






int main (void)
{
    


    int ch;

    // for error
    char errror;
    int t;
    top:
    //system("cls");
    system("clear");

    ch = choice_entry_page();

    switch (ch)
    {

        case 1:
            administrator();
            break;

        case 2:
            employee();
            break;
        case 3:
            exit:
            //system("cls");
            system("clear");
            terminate();
            //system("cls");
            //system("clear");
            return 0;
            break;
        
        default:
            system("clear");
            errorpage();
            t = error();
            if (t == '1')
                goto top;
            else
            {
                goto exit;
            }

            break;
    } 
    
    
}