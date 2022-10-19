/*
This is for Employees Pages
*/

void emp_login_page(int*login)        //employee Login
{
   // login page

    system("clear");
    char ent_user[10],ent_pass[10];
    emp x;
    FILE *a;

    
    a = fopen("emp.dat","rb");
    rewind(a);
    if (a == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }

    login_page_username(ent_user);
    login_page_pass(ent_pass);

    while(fread(&x,sizeof(emp),1,a))
    {
        

        if (atoi(ent_user) == x.emp_id )
        break;


        
    } 
    
    

        
        
    if(!strcmp(x.password,ent_pass))
    {
        if (x.type == 1)
        {
            *login = 1;
        }
        if (x.type == 2)
        {
            *login = 2;
        }
    }
    else 
    *login = 0;
    *login = 0;


    
}

int desk_employee_main_page()   //For Desk employee
{
    system("clear");
    int n;
    page_header();
    desk_employee_body();
    page_footer();
    scanf("%i",&n);
    return n;
}
int service_employee_main_page()    //for service Employees
{
    system("clear");
    int n;
    page_header();
    service_employee_body();
    page_footer();
    scanf("%i",&n);
    return n;
}



int employee()
{
    int login,ch,i;
    
    
   
 for (i = 0; i < 5; i++)
    {
        emp_login_page(&login);
        if (login != 0)
        break;
        if (i == 4 && login == 0)
        {
            system("clear");
            printf("\n\n\n\n\n");
            printf("\t\t\t\tYOU ARE AN IMPOSTOR\n");
            printf("\n\n\n\n\n");fflush(stdin);
            getchar();
            
            exit(2);            
        }
        
    }
    green();
    if (login == 1)
    {
        top1:
        system("clear");
        ch = desk_employee_main_page();
        switch (ch)
        {
            case 1:
                check_in();
                goto top1;
                break;
            case 2:
                check_out();
                goto top1;
                break;
            case 3:
                return 1;
                break;
            case 4:
                return 0;
                break;

            
            default:
            goto top1;
                break;
        }
    }

    if (login == 2)
    {
        top2:
        system("clear");
        ch = service_employee_main_page();
        switch (ch)
        {
            case 1:
                room_to_be_cleaned();
                getchar();
                goto top2;
                break;
            case 2:
                checklist();
                getchar();
                goto top2;
                break;
            case 3:
                return 1;
                break;
            case 4:
                return 0;
                break;

            
            default:
            goto top2;
                break;
        }
    }
    


return 0;
}
