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

//this ia a structure for the date
typedef struct date
{
    int day;
    int month;
    int year;
}date;


//this is astructure for Guest
typedef struct gue
{
    char gue_name[50];
    long long gue_number;
    date day;
    int stay_day;
    
    int room_no;
}gue;


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
    char ent_password[10];
    printf("\tPASSWORD: ");
    scanf("%s",ent_password);
    printf("\n");
    printf("\n");
    printf("\n");
    strcpy(str,ent_password);

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
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
    
    rewind(p);
    while(!feof(p))
    {
        fflush(stdin);
        fread(&data, sizeof(emp),1,p);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tALL EMPLOYEES\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tSN.%i \t\t\t\t\t\t\t\t |\n",++i);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tNAME:\t\t%s\t\t\t\t\t |\n",data.emp_name);
    printf("|\tPHONE:\t\t%lli\t\t\t\t\t |\n",data.emp_phone);
    printf("|\tTYPE:\t\t%i\t\t\t\t\t\t |\n",data.type);
    printf("|\tSALARY:\t\t%li\t\t\t\t\t |\n",data.emp_sal);
    printf("|\tEMP-ID:\t\t%i\t\t\t\t\t\t\t |\n",data.emp_id);
    printf("|\tEMP-PASS:\t%s\t\t\t\t\t |\n",data.password);
    }
    fclose(p);
}
void see_all_emp()
{
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
	add = fopen("emp.dat","ab");
    if (add == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
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
        do
        {
            c = fopen("emp.dat","rb");
            if (c == NULL)
            {
                system("clear");
                printf("\t\t\t\tERROR!!\t\t\t\t");
                printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
                exit(1);
            }
            if (!feof(c))
            break;
            rewind(c);
            fread(&check, sizeof(emp),1,c);
            if (dat.emp_id == check.emp_id)
            {
                printf("\tID TAKEN\n\tEnter again");
                goto EMP_ID;
            }
            fclose(c);
        }while(!feof(c));
        fflush(stdin); 
        printf("\n");       
        printf("\tPASSWORD: ");
        scanf("%s",dat.password);
        printf("\n");
        fseek(add, 0, SEEK_END);
        fwrite(&dat,sizeof(emp),1,add);
       // fflush(stdin);
		//printf("Do you want to add more employee?(y\\n):");
		//scanf("%c",&m);
	//}while(m != 'n');
    
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
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
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
    printf("\tEMP-ID");
    scanf("%d",&id);
	
    neww = fopen("emp1.dat","wb");
    if (neww == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
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
	
}
void gue_log()      //This is For seeing The people who Have visited this palce
{
    gue x;
    int i = 0;
    FILE *g;
    g = fopen("guelog.dat","rb");
    if (g == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
    while(!feof(g))
    {
        fread(&x,sizeof(gue),1,g);
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\tGUEST LOG\t\t\t\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\tSN.1 \t\t\t\t\t\t\t\t |\n");
        printf("|\t\t\t\t\t\t\t\t\t |\n");
        printf("|\tNAME:\t\t%s\t\t\t\t |\n",x.gue_name);
        printf("|\tPHONE:\t\t%lli\t\t\t\t\t |\n",x.gue_number);
        printf("|\tROOM NO\t\t%i\t\t\t\t\t |\n",x.room_no);
        printf("|\tDAYS-STAYED:\t%i\t\t\t\t |\n",x.stay_day);
        printf("|\tPRICE:\t\t%li\t\t\t\t\t\t |\n",(long)x.stay_day*2000);
        printf("|\t\t\t\t\t\t\t\t\t |\n");
    }
}
void show_gue_log()
{
    page_header();
    gue_log();
    page_footer();
    getchar();
}
void profit_loss()  // This is for Profit Loss Calculation
{
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
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
    rewind(e);
    rewind(g);
    while(!feof(e))
    {
        fread(&y,sizeof(emp),1,e);
        tot_emp_sal += (long)y.emp_sal ;
    }

    while(!feof(g))
    {
        fread(&x,sizeof(gue),1,g);
        tot_gue_gain +=(long)(x.stay_day * 2000);
        
    }
    g_l = tot_gue_gain - tot_emp_sal;
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

    printf("|\tBill No : 000\t\t\t\tDate: %d-%d-%d \t |\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("|\tName:%s\t\t\tMobile:%lli\t |\n",b.gue_name,b.gue_number);
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t\tDays Booked\tPrice Per Day\tTotal\t |\n");
    printf("| \t\t\t\t%i\t\t%i\t\t%li\t |\n",b.stay_day,2000,(long)(b.stay_day*2000));
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
    system("clear");
    int p;
    bill_header();
    p = bill_body(a);
    bill_bottom(p);
    getchar();
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
    g = fopen("guelog.dat","wb");
    if (g == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
    fclose(g);
    g = fopen("guelog.dat","ab");
    if (g == NULL)
    {
        g = fopen("guelog.dat","wb");
        if (g == NULL)
        {
            system("clear");
            printf("\t\t\t\tERROR!!\t\t\t\t");
            printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
            exit(1);
        }
    }
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCheck-in Guest\n");
    printf("\t       --------------\n");
    printf("\tDATE(dd mm yyyy): ");
    scanf("%i %i %i",&x.day.day,&x.day.month,&x.day.year);
    printf("\n");
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
    fwrite(&x,sizeof(gue),1,g);
    fclose(g);

}
void check_out()    //This is for Checking out the guest and Generating the bill
{
    system("clear");
    long tbill;
    gue x;
    long long ph;
    FILE *g, *rm;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCheck-out Guest\n");
    printf("\t       --------------\n");
    printf("\tPHONE: ");
    scanf("%lli",&ph);
    printf("\n");
    g = fopen("guelog.dat","ab");
    if (g == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
    while(fread(&x,sizeof(gue),1,g))
	{
		if( ph== x.gue_number)
		{
            printf("press any key\n\n");
            getchar();
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
    rm = fopen("room.txt","a");
    if (rm == NULL)
    {
        rm = fopen("room.txt","w");
        if (rm == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
        exit(1);
    }
    }
    fprintf(rm,"%i",x.room_no);
    printf("press any key");
    getchar();
    tbill = bill(x);
    fclose(g);
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
    int room;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    rm = fopen("room.txt","r");
    if (rm == NULL)
    {
        system("clear");
        printf("\t\t\t\tERROR!!\t\t\t\t");
        printf("\t\t\tCONTACT DEVELOPER\t\t\t\t");
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
    do
    {
        fscanf(rm,"%i ",&room);
        printf("\tROOM NO :\t %i\t ",room);
        printf("\n");

    } while (!feof(rm));
    printf("\n");
    printf("\n");
    getchar();
    fclose(rm);
    system("clear");


}
void checklist()                //This is for checking out the Room that have been cleaned
{
    system("clear");
    FILE *old,*new;
    int room_no,r;
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
    scanf("%i",&room_no);
    printf("\n");
    printf("\n");
    printf("\n");

    old = fopen("room.txt","r");
	new = fopen("nr.txt","w");
	while(!feof(old))
	{
        fscanf(old,"%i",&r);
		if(room_no == r)
		{
			continue;
		}
        fprintf(new,"%i",r);
	}
	fclose(old);
	fclose(new);
	remove("room.txt");
	rename("nr.txt","room.txt");
	
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