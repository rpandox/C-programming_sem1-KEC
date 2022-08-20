

int emp_login_page()
{
   // login page

    system("clear");
    char ent_user[10],ent_pass[10];
    emp x;
    FILE *a;
    a = fopen("emp.dat","rb");
    if (a == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }

    login_page_username(ent_user);
    login_page_pass(ent_pass);

    do
    {
        

        if (atoi(ent_user) == x.emp_id )
        break;
        if (feof(a) == 0)
        {
            printf("\t\t\tPERSON NOT FOUND\n");
            getchar();
            return 0;
        }
    } while (!feof(a));
    
    if(!strcmp(x.password,ent_pass))
    {
        if (x.type == 1)
        {
            return 1;
        }
        if (x.type == 2)
        {
            return 2;
        }
    }
    else 
    return 0;
    return 0;


    
}

int desk_employee_main_page()
{
    system("clear");
    int n;
    page_header();
    desk_employee_body();
    page_footer();
    scanf("%i",&n);
    return n;
}
int service_employee_main_page()
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
        login = emp_login_page();
        if (login != 0)
        break;
        if (i == 4 && login == 0)
        {
            system("clear");
            printf("\n\n\n\n\n");
            printf("\t\t\t\tYOU ARE AN IMPOSTOR\n");
            printf("\n\n\n\n\n");
            getchar();
            exit(2);            
        }
    }

    if (login == 1)
    {
        top1:
        system("clear");
        ch = service_employee_main_page();
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
                goto top2;
                break;
            case 2:
                checklist();
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
