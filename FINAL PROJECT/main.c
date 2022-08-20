/*
This is a Program for The basic Hotel Management System 
This includes Two Portals For The Administrator and Employee
This program can be used to digitize the process of taking logs, 
taking employee details 
f the process is digitized then there will be no problem of storage so
The work load on employees will be decrease 
*/


/*this includes all the header files 
used in this program*/
#include "all_header_files.h"       

int user_page()         //the first entry/login page 
{
    system("clear");    // No Conio On Mac
    int n;
    page_header();
    user_page_body();
    page_footer();
    scanf("%d",&n);
    return n;
}

 
int main (void)
{
    int user_choice,administrator_choice,a,b;

    start:
    system("clear");
    user_choice = user_page();
    switch (user_choice)
    {
    case 1:             //for Administrator
        a = adminn();
        if (a == 1)
        goto start;
        //if a = 0 break     
        break;

    case 2:             //for Employee
        b = employee();
        if (b == 1)
        goto start;
        //if a = 0 break 
        break;
    
    case 3:             //To Exit the Program
        break;
    
    default:
        goto start;
        break;

    }
    system("clear");
    terminate();        //Exit Message
    getchar();
    system("clear");
    return 0;


}
