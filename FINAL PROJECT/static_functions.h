


typedef struct emp_desk
{
    char emp_name[50];      // name of employee
    int emp_id;             //employee id 
    char password[10];      //employee password
    int emp_sal;            //employee salary
    long long emp_phone;    //employee phone 
    int type;               //Service Or Desk (1-DESK 2-SERVICE)
}desk_emp;


typedef struct admin
{
    int admin_id;
    char password[10];

} admin;

typedef struct room
{
    int room_no;
    int is_serviced; //if the room is (1)serviced or (0)not
}room;

typedef struct gue
{
    char gue_name[50];
    long long gue_number;
    room gue_room;
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

// User Page Body Choose user
void user_page_body()
{
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
    printf("| \t\t\t3. EXIT \t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");

}


// Login Page
void login_page()
{
    char ent_username[10],ent_password[10],p;
    int i = 0;
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
    printf("\tPASSWORD: ");
    scanf("%s",ent_password);
    printf("\n");
    printf("\n");
    printf("\n");
    
    
    
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
    printf("| \t\t\t5. Profit/loss \t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t6. Select User Page \t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| \t\t\t7. Exit \t\t\t\t\t |\n");
}
// Administrator Options
void set_price()
{
    char price[10];
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCHANGE PRICE\n");
    printf("\t       --------------\n");
    printf("\n");
    printf("\n");
     
    printf("\tPRICE: ");
    scanf("%s",price);
}
void add_emp()
{
    char name[20],phone[20],type[2],salary[7],pass[8];
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tAdd Employee\n");
    printf("\t       --------------\n");
    printf("\tNAME: ");
    scanf("%s",name);
    printf("\n");
    printf("\tPHONE: ");
    scanf("%s",phone);
    printf("\n");
    printf("\tTYPE (1 for DESK 2 for SERVICE ): ");
    scanf("%s",type);
    printf("\n");
    printf("\tSALARY: ");
    scanf("%s",salary);
    printf("\tPASSWORD: ");
    scanf("%s",pass);
    printf("\n");
    

}
void see_emp()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tALL EMPLOYEES\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tSN.1 \t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tNAME:\t\t--------------------\t\t\t\t |\n");
    printf("|\tPHONE:\t\t--------------------\t\t\t\t |\n");
    printf("|\tTYPE:\t\t--------------------\t\t\t\t |\n");
    printf("|\tSALARY:\t\t--------------------\t\t\t\t |\n");
    printf("|\tEMP-ID:\t\t--------------------\t\t\t\t |\n");
    printf("|\tEMP-PASS:\t--------------------\t\t\t\t |\n");
    
}
void fire_emp()
{
    int id;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tFire Employee\n");
    printf("\t       ---------------\n");
    printf("\tEMP-ID");
    scanf("%d",&id);


}
void gue_log()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tGUEST LOG\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tSN.1 \t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\tNAME:\t\t--------------------\t\t\t\t |\n");
    printf("|\tPHONE:\t\t--------------------\t\t\t\t |\n");
    printf("|\tCHECK-IN\t--------------------\t\t\t\t |\n");
    printf("|\tROOM NO\t\t--------------------\t\t\t\t |\n");
    printf("|\tCHECK-OUT:\t--------------------\t\t\t\t |\n");
    printf("|\tPRICE:\t\t--------------------\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
}
void profit_loss()
{
    int tot_emp_sal,tot_gue_gain,g_l;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
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
    printf("%d",tot_emp_sal);
    printf("\n");
    printf("\tTOTAL GAIN FROM GUESTS: ");
    printf("%d",tot_gue_gain);
    printf("\n");
    if (g_l > 0)
    printf("\tTOTAL GAIN IS : %d",g_l);
    else if (g_l < 0)
    printf("\tTOTAL LOSS IS : %d",g_l);
    else
    printf("\tTHERE IS NO GAIN OR LOSS  ");
    printf("\n");
    printf("\n");
}



// Body Page for Desk Employee  
void desk_employee_body()
{
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
// Desk Employee Options
void check_in()
{
    char name[20],phone[20],checkin_time[20],room_no[7]; // checkin time from time.h
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCheck-in Guest\n");
    printf("\t       --------------\n");
    printf("\tNAME: ");
    scanf("%s",name);
    printf("\n");
    printf("\tPHONE: ");
    scanf("%s",phone);
    printf("\n");
    printf("\tROOM-NO: ");
    scanf("%s",room_no);
    printf("\n");
}
void check_out()
{
    char name[20],checkout_time[20]; // checkin time from time.h
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tCheck-in Guest\n");
    printf("\t       --------------\n");
    printf("\tNAME: ");
    scanf("%s",name);
    printf("\n");
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
//Service Employee Options
void room_no_to_be_serviced()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" \n");
    printf("\n");
    printf("\t\t\tDate: %d-%d-%d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\n");
    printf("\t\tROOM TO BE SERVICED\n");
    printf("\t       ---------------------\n");
    printf("\n");
    printf("\n");
    printf("\tROOM NO :\t ----------- ");
    printf("\n");
    printf("\n");
    printf("\n");
}
void checklist()
{
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
    printf("\tROOM NO :\t ----------- ");
    printf("\n");
    printf("\n");
    printf("\n");
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
void bill_body()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("|\tBill No : 000\t\t\t\tDate: %d-%d-%d \t |\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("|\tName:________________\t\t\tMobile:----------\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("| Check-in\tCheck-out\tDays Booked\tPrice Per Day\tTotal\t |\n");
    printf("| TIME-1\tTIME-2\t\tDays\t\t1200\t\t1200\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
}
void bill_bottom()
{
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\tTotal is :..........\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|________________________________________________________________________|\n");
}

// Terminate/Exit The Program
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
    printf("|\t\t\t\t\tPress Enter Key\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|\t\t\t\t\t\t\t\t\t |\n");
    printf("|________________________________________________________________________|\n");
    getchar();
}

// Error Page
void error()
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
    printf("|________________________________________________________________________|\n");
    getchar();
}