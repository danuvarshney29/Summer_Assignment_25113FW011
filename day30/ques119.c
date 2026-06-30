// Write a program to Create Mini Employee Management System

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];

    int choice;
    int count = 0;
    int searchId;


    while(1)
    {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);



        switch(choice)
        {

            case 1:

                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);


                printf("Enter Employee Name: ");
                scanf("%s", emp[count].name);


                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);


                count++;

                printf("Employee Added Successfully!\n");

                break;




            case 2:

                printf("\n--- Employee Details ---\n");


                for(int i = 0; i < count; i++)
                {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nSalary: %.2f\n", emp[i].salary);
                }

                break;




            case 3:

                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);


                for(int i = 0; i < count; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("\nEmployee Found!");
                        printf("\nName: %s", emp[i].name);
                        printf("\nSalary: %.2f\n", emp[i].salary);
                    }
                }

                break;




            case 4:

                printf("Enter Employee ID to update salary: ");
                scanf("%d", &searchId);


                for(int i = 0; i < count; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("Enter new salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Salary Updated Successfully!\n");
                    }
                }

                break;




            case 5:

                printf("Exiting Employee System...");
                return 0;



            default:

                printf("Invalid Choice!");

        }
    }


    return 0;
}