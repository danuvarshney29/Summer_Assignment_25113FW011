// Write a program to Create employee management system.
#include <stdio.h>
int main()
{
    int emp_id;
    float salary;
    char name[50], department[50];

    printf("Employee Management System\n");

    printf("\nEnter employee name: ");
    scanf("%s", name);

    printf("Enter employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter department: ");
    scanf("%s", department);

    printf("Enter salary: ");
    scanf("%f", &salary);


    printf("\n--- Employee Record ---");
    printf("\nName: %s", name);
    printf("\nEmployee ID: %d", emp_id);
    printf("\nDepartment: %s", department);
    printf("\nSalary: %.2f", salary);


    if (salary >= 50000)
    {
        printf("\nCategory: High Salary Employee");
    }
    else
    {
        printf("\nCategory: Normal Employee");
    }

    return 0;
}