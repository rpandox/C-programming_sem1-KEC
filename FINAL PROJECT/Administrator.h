/*
This is Pages for the Administrator
*/
int administrator_main_page()   //Main PAGE FOR ADMINISTRATOR
{
    system("clear");
    int n;
    page_header();
    administrator_body();
    page_footer();
    fflush(stdin);
    scanf("%i",&n);
    return n;
}
int admin_login_page()          //LOGIN PAGE FOR ADMINISTRATOR
{
    // login page

    
    system("clear");
    char username[10],password[10],ent_user[10],ent_pass[10];
    FILE *a,*b;
    time_t y,z;
    double x;
    b = fopen("wait.dat","rb");
    if (b == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
     
    rewind(b);
    while(fread(&y,sizeof(time_t),1,b))
    {
        z = time(NULL);
        if (difftime(y,z) < (double)(2*60) && difftime(y,z) >= (double)0  )
        return 3;           //For 5 min Not completed

    }
    a = fopen("admin.txt","r");
    if (a == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    rewind(a);
    fflush(stdin);
    fscanf(a,"%s %s",username,password);

    login_page_username(ent_user);
    login_page_pass(ent_pass);
    if(!strcmp(username,ent_user) && !strcmp(password,ent_pass))
        return 0;
    else
        return 1;
}

int adminn()
{
    time_t x;
    FILE *t;
    int administrator_choice,i,login;
    char username[10],password[10];
    
    blue();
    for (i = 0; i < 5; i++)
    {
        login = admin_login_page();
        if (login == 0)
        break;
        if (i == 4 && login != 0)
        {
            x = time(NULL);
            t = fopen("wait.dat","wb");
            if (t == NULL)
            {
                system("clear");
                printf("\t\t\t\tERROR!!\t\t\t\t");
                printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
                exit(3);
            } 
            fwrite(&x,sizeof(time_t),1,t);
            fclose(t);
            system("clear");
            printf("\n\n\n\n\n");
            printf("\t\t\tYOU ARE AN IMPOSTOR\n");
            printf("\n\n\n\n\n");
            printf("\t\t WAIT 2 MINUTES TO LOGIN AGAIN");
            printf("\n\n\n\n\n");
            fflush(stdin);
            getchar();
            system("clear");
            x = time(NULL);
            t = fopen("wait.dat","wb");
            if (t == NULL)
            {
                system("clear");
                printf("\t\t\t\tERROR!!\t\t\t\t");
                printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
                
                exit(3);
            } 
            fwrite(&x,sizeof(time_t),1,t);
            fclose(t);
            return 1;
            
             
        }
        if (login == 3)
        {
            system("clear");
            printf("\n\n\n\t\tYour 2 min Wait time is not completed!!!\n\n\n");
            fflush(stdin);
            getchar();
            exit(9);
        }
        }
        fc_reset();
    top:
    green();

    administrator_choice = administrator_main_page();
    fc_reset();
    
    green();
    switch (administrator_choice)
    {
    case 1:
        // add employee

        add_emp();
        goto top; 
        break;
    case 2:
        // view  all employee 
        see_all_emp();
        getchar();
        goto top;
        break;
    case 3:
        // fire employee 
        fire_emp();
        getchar();
        goto top;
        break;
    case 4:
        // show guestlog 
        show_gue_log();
        getchar();
        goto top;
        break;
    case 5:
        // show total gain/loss
        profit_loss();
        getchar();
        goto top;
        break;
    case 6:
        // GOTO user page 
        return 1;
        break;
    case 7:
        // exit 
        return 0;
        break;
    default:
        goto top;
    }
    fc_reset();

    return 0;
}


