/*
a program to find the taxable amount of an employee.

    a. No tax up to 1,00,000 per annual income
    b. 15% tax for 1,00,000 to 1,75,000 per annual income
    c. 25% tax for greater than 1,75,000 per annual income
*/
#include <stdio.h>

int main(void)
{
    double Sal, tax = 0;
    printf("enter your Salary : ");
    scanf("%lf",&Sal);

    if (Sal <= 100000)
        printf("there is no tax for you\n");
    else
    {
        if (Sal > 100000 && Sal <= 175000)
            tax = 0.15 * (Sal -100000) ;

        if (Sal > 175000)
            tax = 0.15 * 75000 + 0.25 * (Sal - 175000);      
    }
    printf("the total Tax for your Salary of %.2lf is %.2lf \n",Sal , tax);

    return 0;

}