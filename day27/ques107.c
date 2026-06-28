// Write a program to Create salary management system.
#include <stdio.h>
int main()
{
    int emp_id;
    float basic_salary, bonus, tax, net_salary;
    char name[50];

    printf("Salary Management System\n");

    printf("\nEnter employee name: ");
    scanf("%s", name);

    printf("Enter employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter bonus amount: ");
    scanf("%f", &bonus);

    printf("Enter tax amount: ");
    scanf("%f", &tax);


    net_salary = basic_salary + bonus - tax;


    printf("\n   Salary Details   ");
    printf("\nEmployee Name: %s", name);
    printf("\nEmployee ID: %d", emp_id);
    printf("\nBasic Salary: %.2f", basic_salary);
    printf("\nBonus: %.2f", bonus);
    printf("\nTax: %.2f", tax);
    printf("\nNet Salary: %.2f", net_salary);


    if (net_salary >= 50000)
    {
        printf("\nSalary Category: High");
    }
    else
    {
        printf("\nSalary Category: Normal");
    }

    return 0;
}