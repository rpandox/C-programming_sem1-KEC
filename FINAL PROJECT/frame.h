/*
This is the backbone for the program 
it contains all the necessary user definrd functions
and the structures used in this program
*/

//This is a structures for the employees
typedef struct emp
{
    char emp_name[50];      // name of employee
    int emp_id;             //employee id 
    char password[10];      //employee password
    long emp_sal;            //employee salary
    long long emp_phone;    //employee phone 
    int type;               //Service Or Desk (1-DESK 2-SERVICE)
}emp;

//This is the Structure for administrator
typedef struct admin
{
    int admin_id;
    char password[10];
} admin;

typedef struct room
{
    int room_no;

}room;

//this is astructure for Guest
typedef struct gue
{
    char gue_name[50];
    long long gue_number;
    int stay_day;
    int in_out ;             //for checked in 1 for checked out 2
    int room_no;
}gue;


//FOR COLOURING THE TEXT

void red()
{
    printf("\033[1;31m");
}
void black()
{
    printf(" \033[0;30m");
}
void green()
{
    printf("\033[0;32m");
}
void yellow()
{
    printf("\033[1;33m");
}
void blue()
{
    printf("\033[0;34m");
}
void purple()
{
    printf("\033[0;35m");
}
void cyan()
{
    printf("\033[0;36m");
}
void white()
{
    printf("\033[0;37m");
}
void fc_reset()
{
    printf("\033[0m");
}

int gc,ec ;
//Page Header/Footer For Needed Parts 
void page_header()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    printf(" ________________________________________________________________________\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\tDate: %d-%d-%d \t |\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t HOTEL XXX\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t   +=================================================+\t\t |\n"); 
}
void page_footer()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tEnter Your Choice and Press Enter\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|________________________________________________________________________|\n");
}

// User Page Body for Choosing user
void user_page_body()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t USER PAGE\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t1. ADMINISTRATOR\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t2. HOTEL EMPLOYEE\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t3. EXIT \t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");

}


// Login Page For Username And Passwords
void login_page_username(char str[10])
{
    blue();
    char ent_username[10];
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tLOGIN\n");
    printf("\t       -------\n");
    printf("\n");
    printf("\n");
    printf("\tUSERNAME: ");
    scanf("%s",ent_username);
    printf("\n");
    strcpy(str,ent_username);
       
}
void login_page_pass(char str[10])
{
    char ent_password[10],ch;
    int i = 0;

    printf("\tPASSWORD: ");


    //THIS WAS FOR HIDING PASSWORD BUT NO CONIO ON MAC
    /*fflush(stdin);
    while(1) 
    {
        ch =getch();
        if (ch == 13)
        {
            ent_password[i] = '\0';
            break;
        }
        else if (ch == 8)
        {
            if (i>0)
            {
                printf("\b \b");
                continue;
            }
        }

        else if (ch == 9 || ch == 32)
        continue;

        else 
        { 
            ent_password[i] = ch;
            i++;  
            printf("*");
        }
        fflush(stdin); 
    }
    */
   scanf("%s",ent_password);
    printf("\n");
    printf("\n");
    printf("\n");
    strcpy(str,ent_password);
    fc_reset();

}



// Administrator Page Body
void administrator_body()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tHello Administrator\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t1. Add Employee\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t2. View Employees\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t3. Fire Employee\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t4. Show Guest Log \t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t5. Total Gain/Loss \t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t6. Select User Page \t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t7. Exit \t\t\t\t\t |\n");
}

// Administrator Options
void all_emp()      //This is the body for Seeing all employees
{
    emp data;
    int i = 0;
    FILE *p;
    p = fopen("emp.dat","rb");
    if (p == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    
    rewind(p);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tALL EMPLOYEES\t\t\t\t |\n");
    while(fread(&data, sizeof(emp),1,p))
    {
        fflush(stdin);
        
    
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tSN.%i \t\t\t\t\t\t\t\t |\n",++i);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tNAME:\t\t%s\t\t\t\t\t\t |\n",data.emp_name);
    printf("|\tPHONE:\t\t%lli\t\t\t\t\t |\n",data.emp_phone);
    printf("|\tTYPE:\t\t%i\t\t\t\t\t\t |\n",data.type);
    printf("|\tSALARY:\t\t%li\t\t\t\t\t\t |\n",data.emp_sal);
    printf("|\tEMP-ID:\t\t%i\t\t\t\t\t\t |\n",data.emp_id);
    printf("|\tEMP-PASS:\t%s\t\t\t\t\t\t |\n",data.password);
    }
    ec =i;
    fclose(p);
}
void see_all_emp()
{
    system("clear");
    page_header();
    all_emp();
    page_footer();
}
void add_emp()      //This is the code for Adding Employees
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
	FILE *add,*c;
    emp dat , check;
    int i; char m;
    
	c = fopen("emp.dat","rb");
            if (c == NULL)
            {
             c = fopen("emp.dat","wb");
        
            if (c == NULL)
            {
                system("clear");
                printf("\t\t\t\tERROR!!\t\t\t\t");
                printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
                exit(1);
            }
            }
            rewind(c);
    system("clear");
	//do{
        printf(" \n");
        printf("\n");
        printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
        printf("\n");
        printf("\t\tAdd Employee\n");
        printf("\t       --------------\n");
        fflush(stdin);
        printf("\tNAME: ");
        scanf("%s",dat.emp_name);
        printf("\n");
        fflush(stdin);
        printf("\tPHONE: ");
        scanf("%lli",&dat.emp_phone);
        printf("\n");
        fflush(stdin);
            printf("\tTYPE (1 for DESK 2 for SERVICE ): ");
            scanf("%i",&dat.type); 
        printf("\n");
        fflush(stdin);
        printf("\tSALARY: ");
        scanf("%li",&dat.emp_sal);
        printf("\n");
        
        
        EMP_ID:
        fflush(stdin);
        printf("\tEMPLOYEE ID: ");
        scanf("%i",&dat.emp_id);
        rewind(c);
        while(fread(&check,sizeof(emp),1,c))
        { 
            if (dat.emp_id == check.emp_id)
            {
                printf("\n\n\n\n\n\n\tID TAKEN\n\tEnter again\n\n\n");
                goto EMP_ID;
            }
            
        }
        fseek(c,0,SEEK_END);
        fclose(c);
        fflush(stdin); 
        printf("\n");       
        printf("\tPASSWORD: ");
        scanf("%s",dat.password);
        printf("\n");
        
        add = fopen("emp.dat","ab");
        fseek(add, 0, SEEK_END);
        if (add == NULL)
        {
            system("clear");
            printf("\t\t\t\tERROR!!\t\t\t\t");
            printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
            exit(1);
        }
        fseek(add,0,SEEK_END);
        fwrite(&dat,sizeof(emp),1,add);
        fclose(add);
        system("clear");
        see_all_emp();
        system("clear");
       // fflush(stdin);
		//printf("Do you want to add more employee?(y\\n):");
		//scanf("%c",&m);
	//}while(m != 'n');
    
}
void fired_msg()
{
    system("clear");
    printf(" ___________________________\n");
    printf("|\t\t\t    |\n");
    printf("|\t   FIRED\t    |\n");
    printf("|___________________________|\n");
    getchar();
}
void fire_emp()     //This is the code for Fireing Employees

{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    emp x;
	int i,id;
	FILE *old,*neww;
	old = fopen("emp.dat","rb");
	//check NULL
	if (old == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
	
	fflush(stdin);
	
    system("clear");
	
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tFire Employee\n");
    printf("\t       ---------------\n");
    fflush(stdin);
    printf("\tEMP-ID : ");
    scanf("%d",&id);
	
    neww = fopen("emp1.dat","wb");
    if (neww == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    rewind(old);
	while(fread(&x,sizeof(emp),1,old))
	{
		if(id != x.emp_id)
		{
			fwrite(&x,sizeof(emp),1,neww);
		}
	}
	fclose(old);
	fclose(neww);
	remove("emp.dat");
	rename("emp1.dat","emp.dat");
	fired_msg();
}
void gue_log()      //This is For seeing The people who Have visited this palce
{
    gue x;
    int i = 0;
    FILE *g;
    g = fopen("guelog.dat","rb");
    if (g == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    rewind(g);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\tGUEST LOG\t\t\t\t |\n");
    while(fread(&x,sizeof(gue),1,g))
    {
        
        
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\tSN.%d \t\t\t\t\t\t\t\t |\n",++i);
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\tNAME:\t\t%s\t\t\t\t\t\t |\n",x.gue_name);
        printf("|\tPHONE:\t\t%lli\t\t\t\t\t |\n",x.gue_number);
        printf("|\tROOM NO\t\t%i\t\t\t\t\t\t |\n",x.room_no);
        printf("|\tDAYS-STAYED:\t%i\t\t\t\t\t\t |\n",x.stay_day);
        if (x.in_out == 1)
        printf("|\tNOT CHECKED OUT\t\t\t\t\t\t\t |\n");
        if (x.in_out == 2)
        printf("|\tCHECKED OUT\t\t\t\t\t\t\t |\n");
        printf("|\tPRICE:\t\t%li\t\t\t\t\t\t |\n",(long)x.stay_day*2000);
        printf("|\t\t\t\t\t\t\t\t\t |\n");
    }
    gc = i;
    fclose(g);
}
void show_gue_log()
{
    system("clear");
    page_header();
    gue_log();
    page_footer();
    getchar();
}
void profit_loss()  // This is for Profit Loss Calculation
{
    system("clear");
    long tot_emp_sal = 0,tot_gue_gain = 0,g_l;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    FILE *e,*g;
    gue x;
    emp y;
    e = fopen("emp.dat","rb");
    g = fopen("guelog.dat","rb");
    if (e == NULL || g == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    rewind(e);
    rewind(g);
    while(fread(&y,sizeof(emp),1,e))
    {
        tot_emp_sal += (long)y.emp_sal ;
    }

    while(fread(&x,sizeof(gue),1,g))
    {
        tot_gue_gain +=(long)(x.stay_day * 5000);
        
    }
    g_l = tot_gue_gain - tot_emp_sal;
    system("clear");
    system("clear");
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tPROFIT LOSS\n");
    printf("\t       -------------\n");
    printf("\n");
    printf("\n");
    printf("\tTOTAL EMP SALARY: ");
    printf("%li",tot_emp_sal);
    printf("\n");
    printf("\tTOTAL GAIN FROM GUESTS: ");
    printf("%li",tot_gue_gain);
    printf("\n");
    if (g_l > 0)
    printf("\tTOTAL GAIN IS : %li",g_l);
    else if (g_l < 0)
    printf("\tTOTAL LOSS IS : %li",g_l);
    else
    printf("\tTHERE IS NO GAIN OR LOSS  ");
    printf("\n");
    printf("\n");
    fclose(g);
    fclose(e);
    getchar();
}



// Body Page for Desk Employee  
void desk_employee_body()
{
    fflush(stdin);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t Hello Employee,\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t1. Check-in Guest\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t2. Check-out Guest\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t3. Select User Page \t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t4. Exit \t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
}


// For Final Bill/ Reciept
void bill_header()
{
    printf(" ________________________________________________________________________\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tXXX HOTEL\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tBILL RECIEPT\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");     
}
long bill_body(gue b)
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("|\tBill No : %0.3i\t\t\t\tDate: %d-%d-%d \t |\n",gc,tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("|\tName:%s\t\t\tMobile:%lli\t |\n",b.gue_name,b.gue_number);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\tDays Booked\tPrice Per Day\tTotal\t\t\t |\n");
    printf("| \t\t%i\t\t%i\t\t%li\t\t\t |\n",b.stay_day,5000,(long)(b.stay_day*5000));
    printf("|\t\t\t\t\t\t\t\t\t |\n");

    return b.stay_day*2000;
}
void bill_bottom(long p)
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tTotal is :%li R.s.\t\t\t |\n",p);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|________________________________________________________________________|\n");
}

int bill (gue a)
{
    int p = 0;
    if (a.in_out == 1)
    {
    system("clear");
    int p;
    bill_header();
    p = bill_body(a);
    bill_bottom(p);
    fflush(stdin);
    getchar();
    return p;
    }
    else
    {
        system("clear");
        printf("\n\n\n\n\n\n");
        printf("ALREADY CHECKED OUT");
        printf("\n\n\n\n\n\n");
        fflush(stdin);
        getchar();
    }
    return p;
}

// Desk Employee Options
void check_in()     //This is for checking in the guests
{
    system("clear");
    gue x;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    FILE *g;
   
     g = fopen("guelog.dat","ab");
    if (g == NULL)
    {
        g = fopen("guelog.dat","wb");
        if (g == NULL)
        {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
        }
    }
    fseek(g,0,SEEK_END);
    

    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCheck-in Guest\n");
    printf("\t       --------------\n");
    printf("\n");
    fflush(stdin);
    printf("\tNAME: ");
    scanf("%s",x.gue_name);
    printf("\n");
    printf("\tPHONE: ");
    scanf("%lli",&x.gue_number);
    printf("\n");
    printf("\tROOM-NO: ");
    scanf("%i",&x.room_no);
    printf("\n");
    printf("\tDAYS ROOM BOOKED FOR :");
    scanf("%i",&x.stay_day);
    printf("\n");
    x.in_out = 1;
    gc++;
    fwrite(&x,sizeof(gue),1,g);
    fclose(g);
    system("clear");
    gue_log();
    system("clear");

}
void check_out()    //This is for Checking out the guest and Generating the bill
{
    system("clear");
    long tbill;
    gue x,y;
    room r;
    long long ph;
    FILE *g, *rm,*ng;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCheck-out Guest\n");
    printf("\t       --------------\n");
    fflush(stdin);
    printf("\tPHONE: ");
    scanf("%lli",&ph);
    printf("\n");
    g = fopen("guelog.dat","rb");
    if (g == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }

    rewind(g);
    while(fread(&x,sizeof(gue),1,g))
	{
		if( ph== x.gue_number && x.in_out == 1)
		{
            
            tbill = bill(x);

            break;
		}
        if (feof(g))
        {
            system("clear");
            printf("\t\t\t\tERROR!!\t\t\t\t");
            printf("\t\t\tDATA NOT FOUND\t\t\t\t");
            printf("press any key");
            getchar();
            return;
        }
	}
    fclose(g);
  g = fopen("guelog.dat","rb");
    ng = fopen("nguelog.dat","wb");
    
    if (g == NULL || ng == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    rewind(g);
    rewind(ng);
    while(fread(&y,sizeof(gue),1,g))
    {
        if (y.gue_number == x.gue_number)
        y.in_out = 2;
        fwrite(&y,sizeof(gue),1,ng);
    }

    
    getchar();
    
    fclose(g);
    fclose(ng);
    remove("guelog.dat");
    rename("nguelog.dat","guelog.dat");


    rm = fopen("room.bin","ab");
    if (rm == NULL)
    {
        rm = fopen("room.bin","wb");
        if (rm == NULL)
    {
        red();
system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        exit(1);
fc_reset();
    }
    }
    r.room_no = x.room_no;
    fwrite(&r,sizeof(room),1,rm);
    fclose(rm);
}
  


// Body Page for Service Employee
void service_employee_body()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t Hello Employee,\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t1. Room to be Cleaned\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t2. Checklist\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t3. Select User Page \t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t4. Exit \t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
} 

// Service Employees Option
void room_to_be_cleaned()       //This is for seeing the Rooms to be cleaned
{
    system("clear");
    FILE *rm;
    
    room r;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    rm = fopen("room.bin","rb");
    if (rm == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t\n\n");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t\n\n");fflush(stdin);getchar();
        return;
        exit(1);
    }
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tROOM TO BE SERVICED\n");
    printf("\t       ---------------------\n");
    printf("\n");
    printf("\n");
    rewind(rm);
    
    while (fread(&r,sizeof(room),1,rm))
    {
        
        printf("\tROOM NO :\t %i\t ",r.room_no);
        printf("\n");
    } 
    printf("\n");
    printf("\n");
    getchar();
    fclose(rm);
    


}
void checklist()                //This is for checking out the Room that have been cleaned
{
    system("clear");
    FILE *old,*new;
    int roomno;
    room r;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tROOM SERVICED\n");
    printf("\t       ---------------\n");
    printf("\n");
    printf("\n");
    printf("\tROOM NO :\t ");
    scanf("%i",&roomno);
    printf("\n");
    printf("\n");
    printf("\n");

    old = fopen("room.bin","rb");
	new = fopen("nr.bin","wb");
	while(fread(&r,sizeof(room),1,old))
	{
        
		if(roomno == r.room_no)
		{
			continue;
		}
        fwrite(&r,sizeof(room),1,new);
	}
	fclose(old);
	fclose(new);
	remove("room.bin");
	rename("nr.bin","room.bin");
	
}




// Terminate/Exit The Program
void terminate()
{
    system("clear");
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
    printf("|\t\t\t\t\tPress Enter Key\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|________________________________________________________________________|\n");
    getchar();
}