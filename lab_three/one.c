/*
a program for department store to display a list of 3 items, their price lists; 
accept customer’s option and print the cost of the goods, when the required quantity is 
entered as inputs. Using switch case
                    A typical interaction may be as follows:
                    DEPARTMENTAL STORE 
                    S.N.    Item    Price(Rs.)
                    1       Bread   30
                    2       Jam     90
                    3       Butter  120
                Please enter your choice(1,2 or 3): 1   
                Quantity(nos.): 3
                The total cost of your choice will be Rs. 90.
*/

#include <stdio.h>

int main(void)
{
    int choice, quantity, price;
    int price_1, price_2, price_3;
    printf("\t\t\t\tDEPARTMENTAL STORE \n");
    printf("\tS.N.    \t\tItem    \t\tPrice(Rs.)\n");
    printf("\t1       \t\tBread   \t\t30\n");
    printf("\t2       \t\tJam     \t\t90\n");
    printf("\t3       \t\tButter  \t\t120\n");


    price_1 = 30;
    price_2 = 90;
    price_3 = 120;

    one:                //one is here for line 57
    printf("Please enter your choice(1,2 or 3): ");
    scanf("%d",&choice);

    printf("Quantity(nos.): ");
    scanf("%d",&quantity);

    switch (choice)
    {
    case 1:
        price = price_1 *quantity;
        break;

    case 2:
        price = price_2 *quantity;
        break;

    case 3:
        price = price_3 *quantity;
        break;
    
    default:
        printf("ERROR IN CHOICE\n");
        printf("please enter again\n");
        goto one;
        break;
    }

printf("The total cost of your choice will be Rs. %d\n",price);
return 0;

}
    