/*
a program to create a structure address(with members Province number, District, town) 
        and person(with members name, phone no., address) to store data of 5 people. Display the 
        people with the searched Province number. Use function.
*/


#include <stdio.h>

typedef struct address
{
        int province_no;
        char district[30];
        char town[30];
}address;

typedef struct person
{
        char name[30];
        double phone_no;
        address a;
}person;

void search (person *);

int main()
{
        int i;
        person p[5];
        printf("Enter Data of five People\n\n");

        for ( i = 0; i < 5; i++)
        {
                printf("Enter Name \n : ");
                fflush(stdin);
                gets(p[i].name);

                printf("Enter Phone number\n : ");
                scanf("%ld",&p[i].phone_no);

                printf("Enter Address\n");
                
                printf("Province Number : ");
                scanf("%d",&p[i].a.province_no);

                printf("District : ");
                fflush(stdin);
                gets(p[i].a.district);
                
                printf("Town : ");
                fflush(stdin);
                gets(p[i].a.town);

                printf("\n\n");
        }
        
        search(p);
}       


void search (person * per)
{
        int pn,i;
        printf("Enter The Province you want to search\n : ");
        scanf("%d",&pn);

        for ( i = 0; i < 5; i++)
        {
                if (per[i].a.province_no == pn)
                {
                printf(" Name \n : %s\n",per[i].name);

                printf("Phone number\n : %ld\n",per[i].phone_no);

                printf("Address\n");
                
                printf("Province Number : %d\n",per[i].a.province_no);

                printf("District : %s\n",per[i].a.district);
                
                printf("Town : %s\n",per[i].a.town);
                printf("\n\n");
                }

                
        }
        printf("\n\n");
        return ;
}
